#include <iostream>
using namespace std;

//Clase Clase jajaja que redundancia
class Clase{
	private:
		string clave, nombre, claveProfesor;
	public:
		Clase(string, string, string);
		string getClave();	
		string getNombre();
		string getClaveProfesor();
		void setClave(string);
		void setNombre(string);	
		void setClaveProfesor(string);
};

//Constructor
Clase::Clase(string _clave, string _nombre, string _claveProfesor){
	clave = _clave;
	nombre = _nombre;
	claveProfesor = _claveProfesor;
}

//Metodos get
string Clase::getClave(){
	return clave;
}
string Clase::getNombre(){
	return nombre;
}
string Clase::getClaveProfesor(){
	return claveProfesor;
}
		
//Metodos set	
void Clase::setClave(string _clave){
	clave = _clave;
}
void Clase::setNombre(string _nombre){
	nombre = _nombre;
}
void Clase::setClaveProfesor(string _claveProfesor){
	claveProfesor = _claveProfesor;
}
