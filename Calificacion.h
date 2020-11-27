#ifndef CALIFICACION_H
#define CALIFICACION_H

#include "Alumno.h"
//#include "Clase.h"


//Clase Calificacion
class Calificacion{
	private:
		string estado;
		Alumno alum;
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
		Calificacion(){}
		
		Calificacion(Alumno _alum,int _calificacion){
			alum=_alum;
			calificacion = _calificacion;
			calcularEstado();
		}
		
		
		//Metodos get
		Alumno getAlumno(){
			return alum;
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
