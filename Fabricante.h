/*
 * Fabricante.h
 *
 *  Created on: 25 de mar. de 2016
 *      Author: ernesto
 */

#ifndef FABRICANTE_H_
#define FABRICANTE_H_
#include <string.h>
#include <iostream>
#include <stdio.h>
#include "EnumOrigen.h"


using namespace std;

class Fabricante {
private:
	string nombre;
	string rut;
	EnumOrigen origen;
	string pais;
public:
	Fabricante();
	virtual ~Fabricante();
};

#endif /* FABRICANTE_H_ */
