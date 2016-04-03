/*
 * DtGolosina.cpp
 *
 *  Created on: 3 de abr. de 2016
 *      Author: ernesto
 */

#include "DtGolosina.h"

namespace std {

DtGolosina::DtGolosina() {
	this->precio = 0;
	// TODO Apéndice de constructor generado automáticamente

}

DtGolosina::~DtGolosina() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}
string DtGolosina::getNombre(){
	return nombre;
}

double DtGolosina::getPrecio(){
	return precio;
}

Date DtGolosina::getFecha_venc(){
	return fecha_venc;
}

string DtGolosina::getNombre_fabricante(){
	return nombre_fabricante;
}

string DtGolosina::getOrigen(){
	return origen;
}


} /* namespace std */
