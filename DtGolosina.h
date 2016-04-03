/*
 * DtGolosina.h
 *
 *  Created on: 3 de abr. de 2016
 *      Author: ernesto
 */

#ifndef DTGOLOSINA_H_
#define DTGOLOSINA_H_
#include "Date.h"
#include <string.h>
#include <iostream>

namespace std{

class DtGolosina {
private:
	string nombre;
	double precio;
	Date fecha_venc;
	string nombre_fabricante;
	string origen;

public:
	DtGolosina();
	virtual ~DtGolosina();

	virtual string getNombre();
	virtual double getPrecio();
	virtual Date getFecha_venc();
	virtual string getNombre_fabricante();
	virtual string getOrigen();

};

}/* namespace std */

#endif /* DTGOLOSINA_H_ */
