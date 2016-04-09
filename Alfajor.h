/*
 * Alfajor.h
 *
 *  Created on: 3 de abr. de 2016
 *      Author: ernesto
 */

#ifndef ALFAJOR_H_
#define ALFAJOR_H_

#include "Golosina.h"
#include "Fabricante.h"

namespace std {

class Alfajor: public Golosina {
public:
	Alfajor(string nombre,double precio,Date fecha);
	virtual ~Alfajor();

	void setNombre(string nombre);
	void setPrecio(double precio);
	void setFecha_venc(Date fecha);


	string getNombre();
	double getPrecio();
	Date getFecha_venc();


};

} /* namespace std */

#endif /* ALFAJOR_H_ */
