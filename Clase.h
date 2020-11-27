#ifndef CLASE_H
#define CLASE_H

#include "Calificacion.h"
#include "Alumno.h"
#include "Profesor.h"


//Clase Clase jajaja que redundancia
class Clase{
	private:
		string clave, nombre,;
		Profesor prof;
		Calificacion calf[35];

		int numCalf;
	public:
		//Constructor
		Clase(){}
		Clase(string _clave, string _nombre, Profesor _prof){
			clave = _clave;
			nombre = _nombre;
			prof = _prof;
			numCalf=0;
		}
		
		//Metodos get
		string getClave(){
			return clave;
		}
		string getNombre(){
			return nombre;
		}
		Profesor getProfesor(){
			return prof;
		}
		
		//Alumno getAlumno(int i){
		//	return alum[i];
		//}
		int getNumCalif(){
			return numCalf;
		}
		
		void agregarCalificacion(Alumno _alum, int _calif){
			calf[numCalf]=Calificacion(_alum,_calif);
			numCalf++;
		}
		void setCalificacion(int _calif, int indice){
			calf[indice].setcalificacion(_calif);
		}
		
		Calificacion getCalificacion(int i){
			return calf[i];
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
