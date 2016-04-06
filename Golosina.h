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

	virtual void setNombre(string nombre);
	virtual void setPrecio(float precio);
	virtual void setFecha_venc(Date fecha);


	virtual string getNombre();
	virtual float getPrecio();
	virtual Date getFecha_venc();
};


#endif /* GOLOSINA_H_ */
