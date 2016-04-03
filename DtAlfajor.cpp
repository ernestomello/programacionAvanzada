/*
 * DtAlfajor.cpp
 *
 *  Created on: 3 de abr. de 2016
 *      Author: ernesto
 */

#include "DtAlfajor.h"

namespace std {

DtAlfajor::DtAlfajor() {
	// TODO Apéndice de constructor generado automáticamente

}

DtAlfajor::~DtAlfajor() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

string DtAlfajor::getNombre(){
	return DtGolosina::getNombre();
}

double DtAlfajor::getPrecio(){
	return DtGolosina::getPrecio();
}

Date DtAlfajor::getFecha_venc(){
	return DtGolosina::getFecha_venc();
}

string DtAlfajor::getNombre_fabricante(){
	return DtGolosina::getNombre_fabricante();
}

string DtAlfajor::getOrigen(){
	return DtGolosina::getOrigen();
}

} /* namespace std */
