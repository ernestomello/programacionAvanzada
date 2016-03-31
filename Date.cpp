/*
 * Date.cpp
 *
 *  Created on: 29 de mar. de 2016
 *      Author: ernesto
 */

#include "Date.h"

namespace std {

Date::Date() {
	this->dd = 1;
	this->mm = 1;
	this->aaaa = 1900;
	// TODO Apéndice de constructor generado automáticamente

}
Date::Date(int dd,int mm, int aaaa) {
	if (mm > 0 && mm<=12 )
		this->mm = mm;
	else
		this->mm = 1;

	if (aaaa >= 1900)
		this->aaaa = aaaa;
	else
		this->aaaa =1900;
	if (dd > 0 && dd<= 31)
		this->dd = dd;
	else
		this->dd = 1;

	// TODO Apéndice de constructor generado automáticamente

}
Date::~Date() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

} /* namespace std */
