/*
 * Caramelo.cpp
 *
 *  Created on: 31 de mar. de 2016
 *      Author: ernesto
 */

#include "Caramelo.h"

using namespace std;

Caramelo::Caramelo() {
	// TODO Apéndice de constructor generado automáticamente
}
Caramelo::~Caramelo() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

void Caramelo::setNombre(string nombre){
	Golosina::setNombre(nombre);
}


void Caramelo::setFecha_venc(Date fecha){
	Golosina::setFecha_venc(fecha);
}

void Caramelo::setPrecio(float precio){
	Golosina::setPrecio(precio);
}
void Caramelo::setNombre_fabricante(Fabricante nombre_fabricante){
Golosina::setNombre_fabricante(nombre_fabricante);
}
void Caramelo::setSabor(string sabor){
	this->sabor = sabor;
}

string Caramelo::getNombre(){
	return Golosina::getNombre();
}

float Caramelo::getPrecio(){
	return Golosina::getPrecio();
}
Date Caramelo::getFecha_venc(){
	return Golosina::getFecha_venc();
}
Fabricante Caramelo::getNombreFabricante(){
	return Golosina::getNombreFabricante();
}
string Caramelo::getSabor(){
	return sabor;
}



 /* namespace std */
