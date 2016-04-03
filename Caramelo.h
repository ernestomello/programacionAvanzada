/*
 * Caramelo.h
 *
 *  Created on: 31 de mar. de 2016
 *      Author: ernesto
 */

#ifndef CARAMELO_H_
#define CARAMELO_H_

#include "Golosina.h"
#include "Fabricante.h"

namespace std {

class Caramelo: public Golosina {
private:
	string sabor;
public:
	Caramelo();
	virtual ~Caramelo();

	void setNombre(string nombre);
	void setPrecio(float precio);
	void setFecha_venc(Date fecha);
	void setSabor(string sabor);
	void setNombre_fabricante(Fabricante nombre_fabricante);

	string getNombre();
	float getPrecio();
	Date getFecha_venc();
	string getSabor();
	Fabricante getNombreFabricante();
};

} /* namespace std */

#endif /* CARAMELO_H_ */
