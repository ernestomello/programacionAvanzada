/*
 * Alfajor.cpp
 *
 *  Created on: 3 de abr. de 2016
 *      Author: ernesto
 */

#include "Alfajor.h"

namespace std {

Alfajor::Alfajor() {
	// TODO Apéndice de constructor generado automáticamente
}

Alfajor::~Alfajor() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

void Alfajor::setNombre(string nombre){
	Golosina::setNombre(nombre);
}
void Alfajor::setPrecio(float precio){
	Golosina::setPrecio(precio);
}
void Alfajor::setFecha_venc(Date fecha){
	Golosina::setFecha_venc(fecha);
}
void Alfajor::setNombre_fabricante(Fabricante nombre_fabricante){
	Golosina::setNombre_fabricante(nombre_fabricante);
}

string Alfajor::getNombre(){
	return Golosina::getNombre();
}
float Alfajor::getPrecio(){
	return Golosina::getPrecio();
}

Date Alfajor::getFecha_venc(){
	return Golosina::getFecha_venc();
}
Fabricante Alfajor::getNombreFabricante(){
	return Golosina::getNombreFabricante();
}

} /* namespace std */
