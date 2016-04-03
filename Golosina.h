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
#include "Fabricante.h"

using namespace std;

class Golosina {
private:
	string nombre;
	float precio;
	Date fecha_venc;
	Fabricante  nombre_fabricante;
public:
	Golosina();
	virtual ~Golosina();

	virtual void setNombre(string nombre);
	virtual void setPrecio(float precio);
	virtual void setFecha_venc(Date fecha);
	virtual void setNombre_fabricante(Fabricante nombre_fabricante);

	virtual string getNombre();
	virtual float getPrecio();
	virtual Date getFecha_venc();
	virtual Fabricante getNombreFabricante();


};


#endif /* GOLOSINA_H_ */
