/*
 * Fabricante.h
 *
 *  Created on: 25 de mar. de 2016
 *      Author: ernesto
 */

#ifndef FABRICANTE_H_
#define FABRICANTE_H_
#include <string.h>
#include <iostream>
#include <stdio.h>
#include "Golosina.h"

enum  EnumOrigen{ // Será utilizada para definir el Origen del fabricante
	Nacional, Importado
};


namespace std{

class Fabricante {
private:
	string nombre;
	string rut;
	EnumOrigen origen;
	string pais;
	Golosina* golosinas;

public:
	Fabricante();
	Fabricante(string nombre, string rut, EnumOrigen origen, string pais);
	virtual ~Fabricante();
	string getNombre();
	string getRut();
	string getPais();
	EnumOrigen getOrigen();
	Golosina getGolosinas(int x);
	bool tieneGolosina(string golosina);
	void setNombre(string nombre);
	void setRut(string rut);
	void setPais(string pais);
	void setOrigen(EnumOrigen origen);


};
}
#endif /* FABRICANTE_H_ */
