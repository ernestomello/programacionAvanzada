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
Caramelo::Caramelo(string nombre, double precio, Date fecha, string sabor):
	Golosina(nombre, precio, fecha){
	this->sabor = sabor;
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

void Caramelo::setPrecio(double precio){
	Golosina::setPrecio(precio);
}

void Caramelo::setSabor(string sabor){
	this->sabor = sabor;
}

string Caramelo::getNombre(){
	return Golosina::getNombre();
}

double Caramelo::getPrecio(){
	return Golosina::getPrecio();
}
Date Caramelo::getFecha_venc(){
	return Golosina::getFecha_venc();
}

string Caramelo::getSabor(){
	return sabor;
}



 /* namespace std */
