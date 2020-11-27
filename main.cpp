/**
por: Jos� �ngel Rico Mendieta - A01707404

NOTAAAAAA:
	 El programa solo est� en su avance n�mero uno, por lo que solo se busca
	 demostrar la implementaci�n de los objetos.
**/

#include <iostream>
using namespace std;

#include "Alumno.h"
#include "Profesor.h"
#include "Calificacion.h"
#include "Clase.h"

/*
Alumno alumnos[10];
Profesor profes[10];
Calificacion calificaciones[10];
Clase clases[10];

int numAlumnos = 0 , numProfes = 0, numCalificaciones = 0 , numClases = 0;
*/

void menu();
void agregarAlumno();
void agregarProfesor();
void agregarClase();
void agregarCalificacion();
/*
void verAlumno();
void verProfesor();
void verClase();
void verCalificacion();
*/




int main(){
	int opcion;
	bool bandera = true;
	while(bandera){
		menu();
		cout<<"Opci�n: "; cin>>opcion;
		if (opcion == 1){
			agregarAlumno();
		}else if (opcion == 2){
			agregarProfesor();
		}else if (opcion == 3){
			agregarClase();
		}else if (opcion == 4){
			agregarCalificacion();
			/*
		}else if (opcion == 5){
			
		}else if (opcion == 6){
			
		}else if (opcion == 7){
			
		}else if (opcion == 8){
		*/
		}else if (opcion == 5){
			cout<<"�Adios!";
			bandera = false;
		}else {
			cout<<"�Opci�n no valida!";
			bandera = false;
		}
	}
	return 0;
}

void menu(){
	cout << "\n      Menu:\n";
    cout << "1. Agregar Alumno. \n";
    cout << "2. Agregar Profesor. \n";
    cout << "3. Agregar Clase. \n";
    cout << "4. Agregar Calificaciones. \n";
    /*
    cout << "5. Ver Clase \n";
    cout << "6. Ver Alumno \n";
    cout << "7. Ver Calificaci�n\n";
    cout << "8. Ver Profesor \n";
    */
    cout << "5. Salir \n";
}

/**
CASO DE PRUEBA 1: AGREGAR ALUMNO
INPUT:
	Nombre: Angel
	Correo: Angel@hotmail.com
	Direcci�n: Celaya#602
	Matricula: A01707404
	Carrera: ITC
	Numero de Telefono: 4613701728
	Edad: 18
	
OUTPUT:
	       ���AGREGADO CON EXITO!!!
	*******************************************
	*              CREDENCIAL                 *
	*   Nombre: Angel						
	*   Matricula: A01707404
	*   Numero: 4613701728
	*   Edad: 18    			Carrera: ITC
	*   Correo: Angel@hotmail.com
	*   Direcci�n: Celaya#602
	*******************************************
**/
void agregarAlumno(){
	string nombre, correo, direccion, matricula, carrera, numeroTel;
	int edad;
	cout <<  "\n---Agregando Alumno---\n"; 
	cout << "\nNombre: "; cin >> nombre;
	cout << "\nCorreo: "; cin >> correo;
	cout << "\nDirecci�n: "; cin >> direccion;
	cout << "\nMatricula: "; cin >> matricula;
	cout << "\nCarrera: "; cin >> carrera;
	cout << "\nNumero de Telefono: "; cin >> numeroTel;
	cout << "\nEdad: "; cin >> edad;
	Alumno alumnos = Alumno(nombre, correo, direccion, numeroTel, edad, matricula, carrera);
	cout << "\n       ���AGREGADO CON EXITO!!!\n";
	cout << "\n*******************************************";
	cout << "\n*              CREDENCIAL                 *";
	cout << "\n*   Nombre: " << alumnos.getNombre();
	cout << "\n*   Matricula: " << alumnos.getMatricula();
	cout << "\n*   Numero: " << alumnos.getNumeroTel();
	cout << "\n*   Edad: " << alumnos.getEdad() << " 	Carrera: " << alumnos.getCarrera();
	cout << "\n*   Correo: " << alumnos.getCorreo();
	cout << "\n*   Direcci�n: " << alumnos.getDireccion();
	cout << "\n*******************************************\n";
}

/**
CASO DE PRUEBA 2: AGREGAR PROFESOR
INPUT:
	Nombre: Benjamin
	Correo: benjamin@tec.com
	Direcci�n: Qro#123
	Clave: 12345
	-rea: EIC
	Numero de Telefono: 442111111
	Edad: 29
	
OUTPUT:
			���AGREGADO CON EXITO!!!

	*******************************************
	*              CREDENCIAL                 *
	*   Nombre: Benjamin
	*   Clave: 12345
	*   Numero: 442111111
	*   Edad: 29    -rea: EIC
	*   Correo: benjamin@tec.com
	*   Direcci�n: Qro#123
	*******************************************
**/
void agregarProfesor(){
	string nombre, correo, direccion, clave, area, numeroTel;
	int edad;
	cout <<  "\n---Agregando Profesor---\n"; 
	cout << "\nNombre: "; cin >> nombre;
	cout << "\nCorreo: "; cin >> correo;
	cout << "\nDirecci�n: "; cin >> direccion;
	cout << "\nClave: "; cin >> clave;
	cout << "\n�rea: "; cin >> area;
	cout << "\nNumero de Telefono: "; cin >> numeroTel;
	cout << "\nEdad: "; cin >> edad;
	Profesor profes=Profesor(nombre, correo, direccion, numeroTel, edad, clave, area);
	cout << "\n       ���AGREGADO CON EXITO!!!\n";
	cout << "\n*******************************************";
	cout << "\n*              CREDENCIAL                 *";
	cout << "\n*   Nombre: " << profes.getNombre();
	cout << "\n*   Clave: " << profes.getClave();
	cout << "\n*   Numero: " << profes.getNumeroTel();
	cout << "\n*   Edad: " << profes.getEdad() << "	�rea: " << profes.getArea();
	cout << "\n*   Correo: " << profes.getCorreo();
	cout << "\n*   Direcci�n: " <<profes.getDireccion();
	cout << "\n*******************************************\n";
}

/**
CASO DE PRUEBA 3: AGREGAR CLASE
INPUT:
	Nombre: PensamientoComputacion
	Clave de la clase: TC1033
	Clave del profesor: 12345
	
OUTPUT:
			���AGREGADO CON EXITO!!!

	*******************************************
	*                  CLASE                  *
	*   Nombre: PensamientoComputacion
	*   Clave de la clase: TC1033
	*   Clave del profesor: 12345
	*******************************************
**/
void agregarClase(){
	string nombre, clave, claveProfesor;
	cout <<  "\n---Agregando Clase---\n"; 
	cout << "\nNombre: "; cin >> nombre;
	cout << "\nClave de la clase: "; cin >> clave;
	cout << "\nClave del profesor: "; cin >> claveProfesor;
	Clase clases = Clase(clave, nombre, claveProfesor);
	cout << "\n       ���AGREGADO CON EXITO!!!\n";
	cout << "\n*******************************************";
	cout << "\n*                  CLASE                  *";
	cout << "\n*   Nombre: " << clases.getNombre();
	cout << "\n*   Clave de la clase: " << clases.getClave();
	cout << "\n*   Clave del profesor: " << clases.getProfesor();
	cout << "\n*******************************************\n";
}

/**
CASO DE PRUEBA 4: AGREGAR CALIFICACION
INPUT:
	Matricula del alumno: A01707404
	Clave de la clase: TC1033
	Calificaci�n: 100
	
OUTPUT:
			����AGREGADO CON EXITO!!!

	*******************************************
	*             CALIFICACION                *
	*   Matricula del alumno: A01707404
	*   Clave de la clase: TC1033
	*   Calificaci�n: 100
	*   Estado: Aprobado
	*******************************************
**/
void agregarCalificacion(){
	string matriculaAlumno, claveClase;
	int calificacion;
	cout <<  "\n---Agregando Profesor---\n"; 
	cout << "\nMatricula del alumno: "; cin >> matriculaAlumno;
	cout << "\nClave de la clase: "; cin >> claveClase;
	cout << "\nCalificaci�n: "; cin >> calificacion;
	Calificacion calificaciones = Calificacion(matriculaAlumno, claveClase, calificacion);
	cout << "\n       ���AGREGADO CON EXITO!!!\n";
	cout << "\n*******************************************";
	cout << "\n*             CALIFICACION                *";
	cout << "\n*   Matricula del alumno: " << calificaciones.getAlumno();
	cout << "\n*   Clave de la clase: " << calificaciones.getClase();
	cout << "\n*   Calificaci�n: " << calificaciones.getCalificacion();
	cout << "\n	   Estado: " << calificaciones.getEstado();
	cout << "\n*******************************************\n";
}


/**

void verAlumno(){
	cout << "321";
}
void verProfesor(){
	cout << "321";
}
void verClase(){
	cout << "321";
}
void verCalificacion(){
	cout << "321";
}
**/
