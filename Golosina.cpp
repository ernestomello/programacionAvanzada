/*
 * Golosina.cpp
 *
 *  Created on: 28 de mar. de 2016
 *      Author: ernesto
 */

#include "Golosina.h"
#include "Date.h"
#include <string.h>



Golosina::Golosina() {
	precio = 0;
	nombre = " ";
	fecha_venc = Date();
	// TODO Apéndice de constructor generado automáticamente

}

Golosina::~Golosina() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}
void Golosina::setNombre(string nombre){
	this->nombre = nombre;
}
string Golosina::getNombre(){
	return nombre;
}
void Golosina::setPrecio(float precio){
	this->precio = precio;
}
float Golosina::getPrecio(){
	return precio;
}
void Golosina::setFecha_venc(Date fecha){
	this->fecha_venc = fecha;
}
Date Golosina::getFecha_venc(){
	return fecha_venc;
}


