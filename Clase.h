#ifndef CLASE_H
#define CLASE_H

#include <iostream>
using namespace std;

//#include "Calificacion.h"
//#include "Profesor.h"


//Clase Clase jajaja que redundancia
class Clase{
	private:
		string clave, nombre, claveProf;
		//Calificacion calf[35];
		//Alumno alum[35];

		int numAlumnos;
	public:
		//Constructor
		Clase(string _clave, string _nombre, string _claveProf){
			clave = _clave;
			nombre = _nombre;
			claveProf = _claveProf;
			numAlumnos=0;
		}
		
		//Metodos get
		string getClave(){
			return clave;
		}
		string getNombre(){
			return nombre;
		}
		string getProfesor(){
			return claveProf;
		}
		
		//Alumno getAlumno(int i){
		//	return alum[i];
		//}
		int getnumAlumno(){
			return numAlumnos;
		}
		
		
		/**		
		//Metodos set	
		void setAlumno(Alumno _alum){
			alum[numAlumnos] = _alum;
			numAlumnos++;
		} 
		void setProfe(Profesor _prof){
			prof= _prof;
		}
		**/
};
#endif
