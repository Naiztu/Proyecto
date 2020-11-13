#include <iostream>
using namespace std;

//Clase Profesor
class Profesor{
	private:
		string clave, area, nombre, correo, direccion, numeroTel;
		int edad;
	public:
		Profesor(string, string, string, string, int, string, string);
		string getClave();	
		string getArea();
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
		void setClave(string);	
		void setArea(string);
};

//Constructor
Profesor::Profesor(string _nombre, string _correo, string _direccion, string _numeroTel, int _edad, string _clave, string _area){
	nombre = _nombre;
	correo = _correo;
	direccion = _direccion;
	numeroTel = _numeroTel;
	edad = _edad;
	clave = _clave;
	area = _area;
}

//Metodos get
string Profesor::getClave(){
	return clave;
}	
string Profesor::getArea(){
	return area;
}
string Profesor::getNombre(){
	return nombre;
}
string Profesor::getCorreo(){
	return correo;
}
string Profesor::getDireccion(){
	return direccion;
}
string Profesor::getNumeroTel(){
	return numeroTel;
}
int Profesor::getEdad(){
	return edad;
}


//Metodos set
void Profesor::setClave(string _clave){
	clave = _clave;
}
void Profesor::setArea(string _area){
	area = _area;
}
void Profesor::setNombre(string _nombre){
	nombre = _nombre;
}	
void Profesor::setCorreo(string _correo){
	correo =  _correo;
}
void Profesor::setDireccion(string _direccion){
	direccion = _direccion;
}
void Profesor::setNumeroTel(string _numeroTel){
	numeroTel = _numeroTel;
	}
void Profesor::setEdad(int _edad){
	edad = _edad;
}


/**
#include "PersonalUniversidad.h"

class Profesor: public PersonalUniversidad{
	private:
		string clave, area;
	public:
		Profesor(string, string, string, int, int, string, string);
		string getClave(): return clave{};	
		string getArea(): return area{};
		void setClave(string _clave): clave = _clave{};	
		void setArea(string _area): area = _area{};
};

Profesor::Profesor(string _nombre, string _correo, string _direccion, int _numeroTel, int _edad, string _clave, string _area) : PersonalUniversidad( _nombre, _correo, _direccion, _numeroTel, _edad){
	clave = _clave;
	area = _area;
}

//Metodos get
string Profesor::getClave(){
	return clave;
}	
string Profesor::getArea(){
	return area;
}

//Metodos set
void Profesor::setClave(string _clave){
	clave = _clave;
}
void Profesor::setArea(string _area){
	area = _area;
}
**/
