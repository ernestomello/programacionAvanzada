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
	double precio;
	Date fecha_venc;
public:
	//Golosina operator<<(DtAlfajor);
	//Golosina operator<<(DtGolosina);
	Golosina();
	Golosina(string nombre,double precio, Date fecha);
	virtual ~Golosina();

	virtual void setNombre(string nombre);
	virtual void setPrecio(double precio);
	virtual void setFecha_venc(Date fecha);


	virtual string getNombre();
	virtual double getPrecio();
	virtual Date getFecha_venc();
};


#endif /* GOLOSINA_H_ */
