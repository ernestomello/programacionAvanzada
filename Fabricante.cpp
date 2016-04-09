/*
 * Fabricante.cpp
 *
 *  Created on: 25 de mar. de 2016
 *      Author: ernesto
 */

#include "Fabricante.h"
#include "Golosina.h"
#define CANT_GOLOSINAS 50
namespace std{

Fabricante::Fabricante(){
	this->nombre = "";
	this->rut = "";
	this->origen = Nacional;
	this->pais = "";
	this->golosinas = new Golosina[CANT_GOLOSINAS]();
	// TODO Apéndice de constructor generado automáticamente
}

Fabricante::Fabricante(string nombre, string rut, EnumOrigen origen, string pais){
	this->nombre = nombre;
	this->rut = rut;
	this->origen = origen;
	this->pais = pais;
	this->golosinas = new Golosina[CANT_GOLOSINAS]();
	// TODO Apéndice de constructor generado automáticamente
}
Fabricante::~Fabricante(){
	// TODO !CodeTemplates.destructorstub.tododesc!
}

string Fabricante::getNombre(){
	return nombre;
}
string Fabricante::getRut(){
		return rut;
	}
string Fabricante::getPais(){
	return pais;
}
EnumOrigen Fabricante::getOrigen(){
	return origen;
}

bool Fabricante::tieneGolosina(string golosina){

	for (int i = 0; i<= CANT_GOLOSINAS; i++){
		if (strcmp(this->golosinas[i].getNombre().c_str(), golosina.c_str()) == 0)
			return true;
	}
 return false;
}

void Fabricante::setNombre(string nombre){
	this->nombre = nombre;
}
void Fabricante::setRut(string rut){
	this->rut = rut;
}
void Fabricante::setPais(string pais){
	this->pais = pais;
}
void Fabricante::setOrigen(EnumOrigen origen){
	this->origen = origen;
}

Golosina Fabricante::getGolosinas(int x){
	return golosinas[x];
}

}
