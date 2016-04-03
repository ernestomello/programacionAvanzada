/*
 * DtCaramelo.cpp
 *
 *  Created on: 3 de abr. de 2016
 *      Author: ernesto
 */

#include "DtCaramelo.h"

namespace std {

DtCaramelo::DtCaramelo() {
	// TODO Apéndice de constructor generado automáticamente

}

DtCaramelo::~DtCaramelo() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}
string DtCaramelo::getNombre(){
	return DtGolosina::getNombre();
}

double DtCaramelo::getPrecio(){
	return DtGolosina::getPrecio();
}

Date DtCaramelo::getFecha_venc(){
	return DtGolosina::getFecha_venc();
}

string DtCaramelo::getNombre_fabricante(){
	return DtGolosina::getNombre_fabricante();
}

string DtCaramelo::getOrigen(){
	return DtGolosina::getOrigen();
}

} /* namespace std */
