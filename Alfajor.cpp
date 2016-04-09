/*
 * Alfajor.cpp
 *
 *  Created on: 3 de abr. de 2016
 *      Author: ernesto
 */

#include "Alfajor.h"
#include "Fabricante.h"

namespace std {

Alfajor::Alfajor(string nombre, double precio, Date fecha) {
	Golosina(nombre,precio,fecha);
	// TODO Apéndice de constructor generado automáticamente
}

Alfajor::~Alfajor() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

void Alfajor::setNombre(string nombre){
	Golosina::setNombre(nombre);
}
void Alfajor::setPrecio(double precio){
	Golosina::setPrecio(precio);
}
void Alfajor::setFecha_venc(Date fecha){
	Golosina::setFecha_venc(fecha);
}

string Alfajor::getNombre(){
	return Golosina::getNombre();
}
double Alfajor::getPrecio(){
	return Golosina::getPrecio();
}

Date Alfajor::getFecha_venc(){
	return Golosina::getFecha_venc();
}


} /* namespace std */
