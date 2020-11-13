#include<iostream>
using namespace std;

//Clase Calificacion
class Calificacion{
	private:
		string matriculaAlumno, claveClase, estado;
		int calificacion;
	public:
		Calificacion(string, string, int);
		string getMatriculaAlumno();	
		string getClaveClase();
		string getEstado(); 
		int getCalificacion();
		void setMatriculaAlumno(string);	
		void setClaveClase(string);
		void calcularEstado();
		void setcalificacion(int);
};

//Constructor
Calificacion::Calificacion(string _matriculaAlumno, string _claveClase, int _calificacion){
	matriculaAlumno = _matriculaAlumno;
	claveClase = _claveClase;
	calificacion = _calificacion;
	calcularEstado();
}

//Metodos get
string Calificacion::getMatriculaAlumno(){
	return matriculaAlumno;
}	
string Calificacion::getClaveClase(){
	return claveClase;
}
string Calificacion::getEstado(){
	return estado;
}
int Calificacion::getCalificacion(){
	return calificacion;
}

//Metodos set
void Calificacion::setMatriculaAlumno(string _matriculaAlumno){
	 matriculaAlumno = _matriculaAlumno;
}	
void Calificacion::setClaveClase(string _claveClase){
	claveClase = _claveClase;
}
void Calificacion::calcularEstado(){
	if (calificacion >= 70){
		estado = "Aprobado";
	}else if (calificacion<70){
		estado = "Reprobado";
	}
}
void Calificacion::setcalificacion(int _calificacion){
	calificacion = _calificacion;
	calcularEstado();
}
	
