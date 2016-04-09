/*
 * Date.cpp
 *
 *  Created on: 29 de mar. de 2016
 *      Author: ernesto
 */
#include <iostream>
#include "Date.h"

namespace std {

Date::Date() {
	this->dd = 1;
	this->mm = 1;
	this->aaaa = 1900;
	// TODO Apéndice de constructor generado automáticamente

}

Date::Date(Date* fecha){
	this->dd = fecha->getDd();
	this->mm = fecha->getMm();
	this->aaaa = fecha->getAaa();
}

Date::Date(int dd,int mm, int aaaa) {
	try {
	if (mm > 0 && mm<=12 )
		this->mm = mm;
	else
		throw(mm);

	if (aaaa >= 1900)
			this->aaaa = aaaa;
	else
		throw (aaaa);

	if (dd > 0 && dd<= 31)
			this->dd = dd;
		else
			throw (dd);
	}
	catch(int mm){
		cout << "Fecha mal ingresada";
	}
}
	// TODO Apéndice de constructor generado automáticamente


Date::~Date() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}
int Date::getDd(){
	return dd;
}
int Date::getMm(){
	return mm;
}
int Date::getAaa(){
	return aaaa;
}


} /* namespace std */
