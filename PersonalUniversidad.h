#ifndef PERSONALUNIVERSIDAD_H
#define PERSONALUNIVERSIDAD_H


//Clase Padre que no esta integrado en el avance 1

class PersonalUniversidad{
	private:
		string nombre, correo, numeroTel, direccion;
		int edad;
	public:
		//Constructor
		PersonalUniversidad(){}
		PersonalUniversidad(string _nombre, string _correo, string _direccion, string _numeroTel, int _edad){
			nombre = _nombre;
			correo = _correo;
			direccion = _direccion;
			numeroTel = _numeroTel;
			edad = _edad;
		}


		//Metodos get
		string getNombre(){
			return nombre;
		}
		string getCorreo(){
			return correo;
		}
		string getDireccion(){
			return direccion;
		}
		string getNumeroTel(){
			return numeroTel;
		}
		int getEdad(){
			return edad;
		}

		//Metodos set
		void setCorreo(string _correo){
			correo =  _correo;
		}
		void setDireccion(string _direccion){
			direccion = _direccion;
		}
		void setNumeroTel(string _numeroTel){
			numeroTel = _numeroTel;
		}
		void setEdad(int _edad){
			edad = _edad;
		}					
};
#endif
