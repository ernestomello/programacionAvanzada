/*
 * Golosina.cpp
 *
 *  Created on: 28 de mar. de 2016
 *      Author: ernesto
 */

#include "Golosina.h"
#include "Date.h"
#include <string.h>

using namespace std;

Golosina::Golosina() {
	this->precio = 0;
	this->nombre = " ";
	this->fecha_venc = Date();
	// TODO Apéndice de constructor generado automáticamente

}
Golosina::~Golosina(){
	// TODO !CodeTemplates.destructorstub.tododesc!
}
Golosina::Golosina(string nombre,double precio, Date fecha) {
	this->precio = precio;
		this->nombre = nombre;
		this->fecha_venc = fecha;

}
void Golosina::setNombre(string nombre){
	this->nombre = nombre;
}
string Golosina::getNombre(){
	return nombre;
}
void Golosina::setPrecio(double precio){
	this->precio = precio;
}
double Golosina::getPrecio(){
	return precio;
}
void Golosina::setFecha_venc(Date fecha){
	this->fecha_venc = fecha;
}
 Date Golosina::getFecha_venc(){
	return fecha_venc;
}


