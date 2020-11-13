#include <iostream>
using namespace std;

//Clase Alumno
class Alumno{
	private:
		string matricula, carrera, nombre, correo, direccion, numeroTel;
		int edad;
	public:
		Alumno(string, string, string, string, int, string, string);
		string getMatricula();	
		string getCarrera();
		string getNombre();	
		string getCorreo();
		string getDireccion(); 
		string getNumeroTel();
		int getEdad();
		void setNombre(string);	
		void setCorreo(string);
		void setDireccion(string);
		void setNumeroTel(string);
		void setEdad(int);
		void setMatricula(string);	
		void setCarrera(string);
};

//Constructor
Alumno::Alumno(string _nombre, string _correo, string _direccion, string _numeroTel, int _edad, string _matricula, string _carrera){
	nombre = _nombre;
	correo = _correo;
	direccion = _direccion;
	numeroTel = _numeroTel;
	edad = _edad;
	matricula = _matricula;
	carrera = _carrera;
}


//Metodos get
string Alumno::getMatricula(){
	return matricula;
}
string Alumno::getCarrera(){
	return carrera;
}
string Alumno::getNombre(){
	return nombre;
}
string Alumno::getCorreo(){
	return correo;
}
string Alumno::getDireccion(){
	return direccion;
}
string Alumno::getNumeroTel(){
	return numeroTel;
}
int Alumno::getEdad(){
	return edad;
}

//Metodos set
void Alumno::setMatricula(string _matricula){
	matricula = _matricula;
}
void Alumno::setCarrera(string _carrera){
	carrera = _carrera;
}
void Alumno::setNombre(string _nombre){
	nombre = _nombre;
}	
void Alumno::setCorreo(string _correo){
	correo =  _correo;
}
void Alumno::setDireccion(string _direccion){
	direccion = _direccion;
}
void Alumno::setNumeroTel(string _numeroTel){
	numeroTel = _numeroTel;
	}
void Alumno::setEdad(int _edad){
	edad = _edad;
}


/* Metodo Herencia no concluido
#include "PersonalUniversidad.h"
class Alumno: public PersonalUniversidad{
	private:
		string matricula, carrera;
	public:
		Alumno(string, string, string, int, int, string, string);
		string getMatricula();	
		string getCarrera();
		void setMatricula(string);	
		void setCarrera(string);
};

Alumno::Alumno(string _nombre, string _correo, string _direccion, int _numeroTel, int _edad, string _matricula, string _carrera) : PersonalUniversidad( _nombre, _correo, _direccion, _numeroTel, _edad){
	matricula = _matricula;
	carrera = _carrera;
}



string Alumno::getMatricula(){
	return matricula;
}
string Alumno::getCarrera(){
	return carrera;
}


void Alumno::setMatricula(string _matricula){
	matricula = _matricula;
}
void Alumno::setCarrera(string _carrera){
	carrera = _carrera
}
**/
