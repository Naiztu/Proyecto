#ifndef CALIFICACION_H
#define CALIFICACION_H

#include<iostream>
using namespace std;

//#include "Alumno.h"
//#include "Clase.h"


//Clase Calificacion
class Calificacion{
	private:
		string alum, clas, estado;
		int calificacion;
		
		void calcularEstado(){
			if (calificacion >= 70){
				estado = "Aprobado";
			}else if (calificacion<70){
				estado = "Reprobado";
			}
		}
		
	public:
		//Constructor
		Calificacion(string _alum, string _clas, int _calificacion){
			alum = _alum;
			clas = _clas;
			calificacion = _calificacion;
			calcularEstado();
		}
		
		
		//Metodos get
		string getAlumno(){
			return alum;
		}	
		string getClase(){
			return clas;
		}
		string getEstado(){
			return estado;
		}
		int getCalificacion(){
			return calificacion;
		}
		
		//Metodos set
		void setcalificacion(int _calificacion){
			calificacion = _calificacion;
			calcularEstado();
		}
};	
#endif
