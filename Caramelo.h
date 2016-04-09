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
private:
	string sabor;
public:
	Caramelo();
	Caramelo(string nombre, double precio, Date fecha, string sabor);
	virtual ~Caramelo();

	void setNombre(string nombre);
	void setPrecio(double precio);
	void setFecha_venc(Date fecha);
	void setSabor(string sabor);


	string getNombre();
	double getPrecio();
	Date getFecha_venc();
	string getSabor();

};

} /* namespace std */

#endif /* CARAMELO_H_ */
