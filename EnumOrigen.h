/*
 * EnumOrigen.h
 *
 *  Created on: 25 de mar. de 2016
 *      Author: ernesto
 */

#ifndef ENUMORIGEN_H_
#define ENUMORIGEN_H_
#include <string.h>
#include <iostream>
#include <stdio.h>

using namespace std;

class EnumOrigen {
public:
	string Nacional;
	string Importado;
	EnumOrigen();
	virtual ~EnumOrigen();
};

#endif /* ENUMORIGEN_H_ */
