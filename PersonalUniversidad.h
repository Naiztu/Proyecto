#include <iostream>
using namespace std;

//Clase Padre que no esta integrado en el avance 1

class PersonalUniversidad{
	private:
		string nombre, correo, direccion;
		int numeroTel, edad;
	public:
		PersonalUniversidad(string, string, string, int, int);
		string getNombre();	
		string getCorreo();
		string getDireccion(); 
		int getNumeroTel();
		int getEdad();
		void setNombre(string);	
		void setCorreo(string);
		void setDireccion(string);
		void setNumeroTel(int);
		void setEdad(int);
};

PersonalUniversidad::PersonalUniversidad(string _nombre, string _correo, string _direccion, int _numeroTel, int _edad){
	nombre = _nombre;
	correo = _correo;
	direccion = _direccion;
	numeroTel = _numeroTel;
	edad = _edad;
}

string PersonalUniversidad::getNombre(){
	return nombre;
}
string PersonalUniversidad::getCorreo(){
	return correo;
}
string PersonalUniversidad::getDireccion(){
	return direccion;
}
int PersonalUniversidad::getNumeroTel(){
	return numeroTel;
}
int PersonalUniversidad::getEdad(){
	return edad;
}


void PersonalUniversidad::setNombre(string _nombre){
	nombre = _nombre;
}	
void PersonalUniversidad::setCorreo(string _correo){
	correo =  _correo;
}
void PersonalUniversidad::setDireccion(string _direccion){
	direccion = _direccion;
}
void PersonalUniversidad::setNumeroTel(int _numeroTel){
	numeroTel = _numeroTel;
	}
void PersonalUniversidad::setEdad(int _edad){
	edad = _edad;
}
