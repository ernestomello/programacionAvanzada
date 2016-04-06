/*
 * principal.cpp
 *
 *  Created on: 30 de mar. de 2016
 *      Author: ernesto
 */
#include "Fabricante.h"
#include "Golosina.h"
#include "DtGolosina.h"
#include <fstream>
#include <string.h>
#include<stdio.h>

#define MAX_FABRICANTES 10

Fabricante* fabricantes[MAX_FABRICANTES];
int cant_fab= 0; //Para llevar el indice de los fabricantes en el array "fabricantes"
//funciones requeridas por el obligatorio
//Función punto 2.a
void agregarFabricante(string nombre,string pais,string rut, EnumOrigen origen);

//Función punto 2.b
string* listarFabricantes(int & cant_fabricantes);

//Función punto 2.c
void agregarGolosina(string nombre_fabricante, DtGolosina& golosina);

//Función punto 2.d
void eliminarGolosina(string nombre_fabricante, string nombre_golosina);

//Función punto 2.e
DtGolosina** obtenerInfoGolosinasPorFabricante(string nombre_fabricante, int& cant_golosinas);

//Funciones auciliares
void limpiarFabricantes();
void ingresoDeFabricantes();
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
	//if (strcmp(origen,"Nacional") != 0  )
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

void agregarGolosina(string nombre_fabricante, DtGolosina& golosina){

}
