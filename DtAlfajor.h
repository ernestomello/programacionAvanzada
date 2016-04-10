/*
 * DtAlfajor.h
 *
 *  Created on: 3 de abr. de 2016
 *      Author: ernesto
 */

#ifndef DTALFAJOR_H_
#define DTALFAJOR_H_
#include "Date.h"
#include <string.h>
#include "DtGolosina.h"

namespace std {

class DtAlfajor: public DtGolosina {

public:
	DtAlfajor();
	DtAlfajor(double precio, string nombre, Date fecha_venc, string nombre_fabricante, string origen);
	virtual ~DtAlfajor();

	string getNombre();
	double getPrecio();
	Date getFecha_venc();
	string getNombre_fabricante();
	string getOrigen();
	string getTipo();
	friend ostream &operator<< (ostream& output, const DtAlfajor & alfajor );

};

} /* namespace std */

#endif /* DTALFAJOR_H_ */
