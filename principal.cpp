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

using namespace std;



int main(int argc, char *argv[]){
string* nombresFabricantes;

limpiarFabricantes();
ingresoDeFabricantes();

nombresFabricantes = listarFabricantes(cant_fab);

for (int i = 0; i <= cant_fab;i++)
	cout<<"fabricante "<<nombresFabricantes[i]<<"\n";

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
//Fabricante* fabricantes;




		cout<<"Es un Caramelo ?";
		cin>>cara;
		if ( cara == 's'){

			cout<<"Ingrese Sabor";
			cin>>sabor;
			Caramelo* caramelo = new Caramelo(golosina.getNombre(),golosina.getPrecio(),golosina.getFecha_venc(),sabor);

		}else{
			Alfajor* alfajor = new Alfajor(golosina.getNombre(),golosina.getPrecio(),golosina.getFecha_venc());
		}

		for (int i = 0; i<=MAX_FABRICANTES;i++){
				if(strcmp(fabricantes[i]->getNombre().c_str(), nombre_fabricante.c_str())==0){
					if( !fabricantes[i]->tieneGolosina(golosina.getNombre())){

						}
				}
			}



}
void eliminarGolosina(string nombre_fabricante, string nombre_golosina){

}

//Función punto 2.e
/*DtGolosina** obtenerInfoGolosinasPorFabricante(string nombre_fabricante, int& cant_golosinas){
DtGolosina* arreglo_golosinas = new DtGolosina[cant_golosinas]();
DtGolosina **retorno = &arreglo_golosinas;



	return retorno;
}*/
DtGolosina** obtenerInfoGolosinasPorFabricante(string nombre_fabricante, int& cant_golosinas){
	int i,k;
	DtGolosina* arreglo_golosinas = new DtGolosina[cant_golosinas]();
	DtGolosina auxiliar;
	DtGolosina **retorno = &arreglo_golosinas;
	for (i = 0; i <= cant_fab; i++){
		if (strcmp(fabricantes[i]->getNombre().c_str(),nombre_fabricante.c_str())==0){
			for (k=0; k<cant_golosinas; k++){
				fabricantes[i]->getGolosinas(k);

				arreglo_golosinas[k];

			}
		}
		else
			arreglo_golosinas = NULL;
	}
	return retorno;
}


void menu(){
	cout<<"Ingrese 1 para agregar fabricante"<<endl;
	cout<<"Ingrese 2 para mostrar la lista de fabricantes"<<endl;
	cout<<"Ingrese 3 para agregar golosina a un fabricante especifico"<<endl;
	cout<<"Ingrese 4 para mostrar informacion de las golosinas segun su fabricante"<<endl;
	cout<<"0 - Salir"<<endl;
}
