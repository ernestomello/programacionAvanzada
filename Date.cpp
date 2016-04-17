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

this->mm = mm;
this->aaaa = aaaa;
this->dd = dd;
// TODO Apéndice de constructor generado automáticamente
}

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
