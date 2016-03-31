/*
 * Caramelo.h
 *
 *  Created on: 31 de mar. de 2016
 *      Author: ernesto
 */

#ifndef CARAMELO_H_
#define CARAMELO_H_

#include "Golosina.h"

namespace std {

class Caramelo: public Golosina {
private: string sabor;
public:
	Caramelo();
	virtual ~Caramelo();
	void setNombre(string nombre);
	void setPrecio(float precio);
	void setFecha_venc(Date fecha);

	string getNombre();
	float getPrecio();
	Date getFecha_venc();
};

} /* namespace std */

#endif /* CARAMELO_H_ */
