/*
 * principal.cpp
 *
 *  Created on: 30 de mar. de 2016
 *      Author: ernesto
 */
#include "Fabricante.h"
#include "Golosina.h"
#include "Caramelo.h"
#include "Alfajor.h"
#include "DtGolosina.h"
#include <fstream>
#include <string.h>
#include <stdio.h>

#define MAX_FABRICANTES 10

Fabricante* fabricantes[MAX_FABRICANTES];
int cant_fab= 0; //Para llevar el indice de los fabricantes en el array "fabricantes"
//funciones requeridas por el obligatorio
//Función punto 2.a
void agregarFabricante(string nombre,string pais,string rut, EnumOrigen origen);

//Función punto 2.b
string* listarFabricantes(int & cant_fabricantes);

//Función punto 2.c
void agregarGolosina(string nombre_fabricante, DtGolosina &golosina);

//Función punto 2.d
void eliminarGolosina(string nombre_fabricante, string nombre_golosina);

//Función punto 2.e
DtGolosina** obtenerInfoGolosinasPorFabricante(string nombre_fabricante, int& cant_golosinas);

//Funciones auciliares
void limpiarFabricantes();
void ingresoDeFabricantes();
void ingresoDeGolosinas();
void borrarFabricante();
void borrarGolosina();
void menu();

using namespace std;



int main(int argc, char *argv[]){
int opcion= 0;
string* nombresFabricantes;
string nombre_fabricante;
DtGolosina** golosinas_fabricante;// = new DtGolosina[CANT_GOLOSINAS]();
int cant_golosinas = CANT_GOLOSINAS;



while (opcion != 0){

	menu();
	cin>>opcion;
	switch (opcion){
	case 1:
		limpiarFabricantes();
		ingresoDeFabricantes();
		break;
	case 2:
		nombresFabricantes = listarFabricantes(cant_fab);
		for (int i = 0; i <= cant_fab;i++)
			cout<<"fabricante "<<nombresFabricantes[i]<<"\n";
		break;
	case 3:
		ingresoDeGolosinas();
		break;
	case 4:
		borrarGolosina();
		break;
	case 5:
		 golosinas_fabricante = obtenerInfoGolosinasPorFabricante(nombre_fabricante, cant_golosinas);
		 for (int j= 0 ; j <= cant_golosinas;j++)
			 cout<<golosinas_fabricante[j];
		break;
	}

}





}

void limpiarFabricantes(){
	for (int i = 0; i< MAX_FABRICANTES; i++)
		fabricantes[i] = NULL;
}

void ingresoDeFabricantes(){
string nombre, pais, rut,origen;
char sigue = 's';
EnumOrigen origenE;

while ( sigue != 'n'){
	cout<<"Ingreso de Fabricante\n";
	cout<<"Ingrese Nombre: ";
	cin>>nombre;
	cout<<"\nIngrese Pais : ";
	cin>>pais;
	cout<<"\nIngrese RUT: ";
	cin>>rut;
	cout<<"\nIngrese Origen (Nacional, Importado) : ";
	cin>>origen;
	if (strcmp(origen.c_str(),"Nacional") != 0  )
		origenE=Importado;
	else
		origenE = Nacional;

	agregarFabricante(nombre, pais,rut,origenE);
	cout<<"\nAgrega Otro? (s/n) ";
	cin>>sigue;
}
}
void agregarFabricante(string nombre, string pais, string rut, EnumOrigen origen){
Fabricante* f = new Fabricante(nombre,rut,origen,pais);

fabricantes[cant_fab]= f;
cant_fab ++;
}

string* listarFabricantes(int & cant_fabricantes){
string* nombres = new string[10]() ;


for (int i= 0; i<= cant_fabricantes; i++){
	if ( fabricantes[i] != NULL)
		nombres[i] = fabricantes[i]->getNombre();

}
	return  nombres;
}
void ingresoDeGolosinas(){
	string nombre, origen;
	double precio;

	DtGolosina* nuevaGol;
	string nombre_fabricante;
	char sigue;
	int dd, mm, aaaa ;


	while ( sigue != 'n'){
		cout<<"Ingreso de Golosinas\n";
		cout<<"Ingrese Nombre Fabricante: ";
		cin>>nombre_fabricante;
		cout<<"Ingrese Nombre : ";
				cin>>nombre;
				cout<<"\nIngrese Precio : ";
				cin>>precio;
				cout<<"\nIngrese Fecha Venc.: ";
				cin>>dd;
				cin>>mm;
				cin>>aaaa;
				Date* fecha_venc= new Date(dd,mm,aaaa);

				nuevaGol = new DtGolosina(precio,nombre,fecha_venc,nombre_fabricante,origen);

		agregarGolosina(nombre_fabricante, *nuevaGol);
		cout<<"\nAgrega Otro? (s/n) ";
		cin>>sigue;
	}
}
void borrarFabricante(){
	;
}
void borrarGolosina(){
	;
}

void agregarGolosina(string nombre_fabricante, DtGolosina& golosina){
string sabor;
char cara;
Golosina* alfajor;
//Golosina* caramelo;
//Fabricante* fabricantes;
		cout<<"Es un Caramelo ?";
		cin>>cara;
		if ( cara == 's'){

			cout<<"Ingrese Sabor";
			cin>>sabor;
			alfajor = new Caramelo(golosina.getNombre(),golosina.getPrecio(),golosina.getFecha_venc(),sabor);

		}else{
			alfajor = new Alfajor(golosina.getNombre(),golosina.getPrecio(),golosina.getFecha_venc());
		}
		for (int i = 0; i<=MAX_FABRICANTES;i++){
				if(strcmp(fabricantes[i]->getNombre().c_str(), nombre_fabricante.c_str())==0){
					if( !fabricantes[i]->tieneGolosina(golosina.getNombre())){
						for (int j = 0; j <= CANT_GOLOSINAS; j++ ){
							if (fabricantes[i]->getPunteroGolosinas(j) == NULL)
								fabricantes[i]->setGolosinas(alfajor);
						}
					}
				}
			}



}
void eliminarGolosina(string nombre_fabricante, string nombre_golosina){
// Recorro el array de fabricantes y comparo los nombres.
//Si son iguales, pregunto si tiene golosina para eliminarla o decir que no tiene golosina
for(int i=0; i<=MAX_FABRICANTES; i++){
	if(strcmp(fabricantes[i]->getNombre().c_str(), nombre_fabricante.c_str())==0){
		if(fabricantes[i]->tieneGolosina(nombre_golosina)){
			for(int j=0; j<=CANT_GOLOSINAS; j++){
				if(strcmp(fabricantes[i]->getGolosinas(j).getNombre().c_str(),nombre_golosina.c_str()))
				delete fabricantes[i]->getPunteroGolosinas(j);

			}
		}

	}
}
}

//Función punto 2.e
DtGolosina** obtenerInfoGolosinasPorFabricante(string nombre_fabricante, int& cant_golosinas){
	int i,k;
	DtGolosina** arreglo_golosinas = new DtGolosina* [cant_golosinas]();
	string origen;

	for (i = 0; i <= cant_fab; i++){
		if (strcmp(fabricantes[i]->getNombre().c_str(),nombre_fabricante.c_str())==0){
			for (k=0; k<cant_golosinas; k++){
				if (fabricantes[i]->getOrigen() == Importado )
					origen ="Importado";
				else
					origen = "Nacional" ;

				DtGolosina* auxiliar = new  DtGolosina (fabricantes[i]->getGolosinas(k).getPrecio(),
						fabricantes[i]->getGolosinas(k).getNombre(),
						fabricantes[i]->getGolosinas(k).getFecha_venc(),
						fabricantes[i]->getNombre(),
						origen );

				arreglo_golosinas[k] = auxiliar ;
			}
		}
		else
			arreglo_golosinas = NULL;
	}
	return arreglo_golosinas;
}


void menu(){
	cout<<"1 - Agregar fabricante"<<endl;
	cout<<"2 - Mostrar la lista de fabricantes"<<endl;
	cout<<"3 - Agregar golosina a un fabricante especifico"<<endl;
	cout<<"4 - Borrar golosina a un fabricante especifico"<<endl;
	cout<<"5 - Mostrar informacion de las golosinas segun su fabricante"<<endl;
	cout<<"0 - Salir"<<endl;
}
