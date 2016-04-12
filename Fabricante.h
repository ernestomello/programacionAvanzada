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
#define CANT_GOLOSINAS 50

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
	Golosina* golosinas[CANT_GOLOSINAS];

public:
	Fabricante();
	Fabricante(string nombre, string rut, EnumOrigen origen, string pais);
	virtual ~Fabricante();
	string getNombre();
	string getRut();
	string getPais();
	EnumOrigen getOrigen();
	//Golosina getGolosinas(int a);
	Golosina* getPunteroGolosinas(int x);
	bool tieneGolosina(string golosina);
	void setNombre(string nombre);
	void setRut(string rut);
	void setPais(string pais);
	void setOrigen(EnumOrigen origen);
	void setGolosinas(Golosina *golosina,int x);


};
}
#endif /* FABRICANTE_H_ */
