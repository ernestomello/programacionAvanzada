/*
 * DtCaramelo.h
 *
 *  Created on: 3 de abr. de 2016
 *      Author: ernesto
 */

#ifndef DTCARAMELO_H_
#define DTCARAMELO_H_
#include "Date.h"
#include <string.h>
#include "DtGolosina.h"

namespace std {

class DtCaramelo: public DtGolosina {
private:
	string sabor;
public:
	DtCaramelo();
	DtCaramelo(double precio, string nombre, Date* fecha_venc, string nombre_fabricante, string origen,string sabor);
	virtual ~DtCaramelo();

	string getNombre();
	double getPrecio();
	Date getFecha_venc();
	string getNombre_fabricante();
	string getOrigen();
	string getSabor();
};

} /* namespace std */

#endif /* DTCARAMELO_H_ */
