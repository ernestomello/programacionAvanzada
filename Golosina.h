/*
 * Golosina.h
 *
 *  Created on: 28 de mar. de 2016
 *      Author: ernesto
 */

#ifndef GOLOSINA_H_
#define GOLOSINA_H_
#include <string.h>
#include <iostream>
#include "Date.h"

using namespace std;

class Golosina {
private:
	string nombre;
	float precio;
	Date fecha_venc;
public:
	Golosina();
	virtual ~Golosina();
	void setNombre(string nombre);
	string getNombre();
	void setPrecio(float precio);
	float getPrecio();
	void setFecha_venc(Date fecha);
	Date getFecha_venc();


};
#endif /* GOLOSINA_H_ */
