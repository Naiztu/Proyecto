#ifndef PROFESOR_H
#define PROFESOR_H

#include <iostream>
using namespace std;

#include "PersonalUniversidad.h"

//Clase Profesor
class Profesor: public PersonalUniversidad{
	private:
		string clave, area;
	public:
	//Constructor
	Profesor(string _nombre, string _correo, string _direccion, string _numeroTel, int _edad, string _clave, string _area) : PersonalUniversidad( _nombre, _correo, _direccion, _numeroTel, _edad){
	clave = _clave;
	area = _area;
	}

	//Metodos get
	string getClave(){
		return clave;
	}	
	string getArea(){
		return area;
	}
	
	//Metodos set
	void setArea(string _area){
		area = _area;
	}
};

#endif
