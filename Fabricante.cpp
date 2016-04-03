/*
 * Fabricante.cpp
 *
 *  Created on: 25 de mar. de 2016
 *      Author: ernesto
 */

#include "Fabricante.h"
namespace std{

Fabricante::Fabricante(){
	this->nombre = "";
	this->rut = "";
	this->origen = Nacional;
	this->pais = "";
	// TODO Apéndice de constructor generado automáticamente
}

Fabricante::Fabricante(string nombre, string rut, EnumOrigen origen, string pais){
	this->nombre = nombre;
	this->rut = rut;
	this->origen = origen;
	this->pais = pais;
	// TODO Apéndice de constructor generado automáticamente
}
Fabricante::~Fabricante(){
	// TODO !CodeTemplates.destructorstub.tododesc!
}

}
