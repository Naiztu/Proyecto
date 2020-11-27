#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
using namespace std;

#include "PersonalUniversidad.h"

//Clase Alumno
class Alumno: public PersonalUniversidad{
	private:
		string matricula, carrera;
	public:
		//Constructor
		Alumno(string _nombre, string _correo, string _direccion, string _numeroTel, int _edad, string _matricula, string _carrera):PersonalUniversidad( _nombre, _correo, _direccion, _numeroTel, _edad){
				matricula = _matricula;
				carrera = _carrera;
		}
	    
	    //Metodos get
		string getMatricula(){
			return matricula;
		}
			
		string getCarrera(){
			return carrera;
		}
		
		//Metodos set	
		void setCarrera(string _carrera){
			carrera = _carrera;
		}
};
#endif
