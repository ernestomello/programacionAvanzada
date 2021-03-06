/*
 * DtAlfajor.cpp
 *
 *  Created on: 3 de abr. de 2016
 *      Author: ernesto
 */

#include "DtAlfajor.h"


namespace std {

DtAlfajor::DtAlfajor(){
	DtGolosina();
}

DtAlfajor::DtAlfajor(double precio,string nombre,Date fecha_venc, string nombre_fabricante, string origen):
	DtGolosina(precio,nombre,fecha_venc,nombre_fabricante,origen){

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
string DtAlfajor::getTipo(){
	return "Alfajor";
}
ostream &operator<< (ostream& output, DtAlfajor* &alfajor ){

	output 	<<"Nombre Golosina: "<< alfajor->getNombre()<<"\n"
			<<"Precio: "<< alfajor->getPrecio()<<"\n"
			<<"Nombre Fabricante: " << alfajor->getNombre_fabricante()<<"\n"
			<<"Origen: "<< alfajor->getOrigen()<<"\n"
			<<"Tipo "<< alfajor->getTipo();
	return output ;
}

} /* namespace std */
