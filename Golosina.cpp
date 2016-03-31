/*
 * Golosina.cpp
 *
 *  Created on: 28 de mar. de 2016
 *      Author: ernesto
 */

#include "Golosina.h"
#include "Date.h"
#include <string.h>



virtual Golosina::Golosina() {
	precio = 0;
	nombre = " ";
	fecha_venc = Date();
	// TODO Apéndice de constructor generado automáticamente

}

virtual Golosina::~Golosina() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}
virtual void Golosina::setNombre(string nombre){
	this->nombre = nombre;
}
virtual string Golosina::getNombre(){
	return nombre;
}
virtual void Golosina::setPrecio(float precio){
	this->precio = precio;
}
virtual float Golosina::getPrecio(){
	return precio;
}
virtual void Golosina::setFecha_venc(Date fecha){
	this->fecha_venc = fecha;
}
virtual Date Golosina::getFecha_venc(){
	return fecha_venc;
}
