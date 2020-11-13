/**
por: José Ángel Rico Mendieta - A01707404

NOTAAAAAA:
	 El programa solo está en su avance número uno, por lo que solo se busca
	 demostrar la implementación de los objetos.
**/

#include <iostream>
using namespace std;
#include "Alumno.h"
#include "Profesor.h"
#include "Calificacion.h"
#include "Clase.h"

void menu();
void agregarAlumno();
void agregarProfesor();
void agregarClase();
void agregarCalificacion();



int main(){
	int opcion;
	bool bandera = true;
	while(bandera){
		menu();
		cout<<"Opción: "; cin>>opcion;
		if (opcion == 1){
			agregarAlumno();
		}else if (opcion == 2){
			agregarProfesor();
		}else if (opcion == 3){
			agregarClase();
		}else if (opcion == 4){
			agregarCalificacion();
		}else if (opcion == 5){
			cout<<"¡Adios!";
			bandera = false;
		}else {
			cout<<"¡Opción no valida!";
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
    cout << "5. Salir \n";
}

/**
CASO DE PRUEBA 1: AGREGAR ALUMNO
INPUT:
	Nombre: Angel
	Correo: Angel@hotmail.com
	Direcci¾n: Celaya#602
	Matricula: A01707404
	Carrera: ITC
	Numero de Telefono: 4613701728
	Edad: 18
	
OUTPUT:
	       íííAGREGADO CON EXITO!!!
	*******************************************
	*              CREDENCIAL                 *
	*   Nombre: Angel						
	*   Matricula: A01707404
	*   Numero: 4613701728
	*   Edad: 18    			Carrera: ITC
	*   Correo: Angel@hotmail.com
	*   Direcci¾n: Celaya#602
	*******************************************
**/
void agregarAlumno(){
	string nombre, correo, direccion, matricula, carrera, numeroTel;
	int edad;
	cout <<  "\n---Agregando Alumno---\n"; 
	cout << "\nNombre: "; cin >> nombre;
	cout << "\nCorreo: "; cin >> correo;
	cout << "\nDirección: "; cin >> direccion;
	cout << "\nMatricula: "; cin >> matricula;
	cout << "\nCarrera: "; cin >> carrera;
	cout << "\nNumero de Telefono: "; cin >> numeroTel;
	cout << "\nEdad: "; cin >> edad;
	Alumno alumno1(nombre, correo, direccion, numeroTel, edad, matricula, carrera);
	cout << "\n       ¡¡¡AGREGADO CON EXITO!!!\n";
	cout << "\n*******************************************";
	cout << "\n*              CREDENCIAL                 *";
	cout << "\n*   Nombre: " << alumno1.getNombre();
	cout << "\n*   Matricula: " << alumno1.getMatricula();
	cout << "\n*   Numero: " << alumno1.getNumeroTel();
	cout << "\n*   Edad: " << alumno1.getEdad() << " 	Carrera: " << alumno1.getCarrera();
	cout << "\n*   Correo: " << alumno1.getCorreo();
	cout << "\n*   Dirección: " << alumno1.getDireccion();
	cout << "\n*******************************************\n";
}

/**
CASO DE PRUEBA 2: AGREGAR PROFESOR
INPUT:
	Nombre: Benjamin
	Correo: benjamin@tec.com
	Direcci¾n: Qro#123
	Clave: 12345
	-rea: EIC
	Numero de Telefono: 442111111
	Edad: 29
	
OUTPUT:
			íííAGREGADO CON EXITO!!!

	*******************************************
	*              CREDENCIAL                 *
	*   Nombre: Benjamin
	*   Clave: 12345
	*   Numero: 442111111
	*   Edad: 29    -rea: EIC
	*   Correo: benjamin@tec.com
	*   Direcci¾n: Qro#123
	*******************************************
**/
void agregarProfesor(){
	string nombre, correo, direccion, clave, area, numeroTel;
	int edad;
	cout <<  "\n---Agregando Profesor---\n"; 
	cout << "\nNombre: "; cin >> nombre;
	cout << "\nCorreo: "; cin >> correo;
	cout << "\nDirección: "; cin >> direccion;
	cout << "\nClave: "; cin >> clave;
	cout << "\nÁrea: "; cin >> area;
	cout << "\nNumero de Telefono: "; cin >> numeroTel;
	cout << "\nEdad: "; cin >> edad;
	Profesor profesor1(nombre, correo, direccion, numeroTel, edad, clave, area);
	cout << "\n       ¡¡¡AGREGADO CON EXITO!!!\n";
	cout << "\n*******************************************";
	cout << "\n*              CREDENCIAL                 *";
	cout << "\n*   Nombre: " << profesor1.getNombre();
	cout << "\n*   Clave: " << profesor1.getClave();
	cout << "\n*   Numero: " << profesor1.getNumeroTel();
	cout << "\n*   Edad: " << profesor1.getEdad() << "	Área: " << profesor1.getArea();
	cout << "\n*   Correo: " << profesor1.getCorreo();
	cout << "\n*   Dirección: " << profesor1.getDireccion();
	cout << "\n*******************************************\n";
}

/**
CASO DE PRUEBA 3: AGREGAR CLASE
INPUT:
	Nombre: PensamientoComputacion
	Clave de la clase: TC1033
	Clave del profesor: 12345
	
OUTPUT:
			íííAGREGADO CON EXITO!!!

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
	Clase clase1(clave, nombre, claveProfesor);
	cout << "\n       ¡¡¡AGREGADO CON EXITO!!!\n";
	cout << "\n*******************************************";
	cout << "\n*                  CLASE                  *";
	cout << "\n*   Nombre: " << clase1.getNombre();
	cout << "\n*   Clave de la clase: " << clase1.getClave();
	cout << "\n*   Clave del profesor: " << clase1.getClaveProfesor();
	cout << "\n*******************************************\n";
}

/**
CASO DE PRUEBA 4: AGREGAR CALIFICACION
INPUT:
	Matricula del alumno: A01707404
	Clave de la clase: TC1033
	Calificaci¾n: 100
	
OUTPUT:
			ííííAGREGADO CON EXITO!!!

	*******************************************
	*             CALIFICACION                *
	*   Matricula del alumno: A01707404
	*   Clave de la clase: TC1033
	*   Calificaci¾n: 100
	*   Estado: Aprobado
	*******************************************
**/
void agregarCalificacion(){
	string matriculaAlumno, claveClase;
	int calificacion;
	cout <<  "\n---Agregando Profesor---\n"; 
	cout << "\nMatricula del alumno: "; cin >> matriculaAlumno;
	cout << "\nClave de la clase: "; cin >> claveClase;
	cout << "\nCalificación: "; cin >> calificacion;
	Calificacion calificacion1(matriculaAlumno, claveClase, calificacion);
	cout << "\n       ¡¡¡AGREGADO CON EXITO!!!\n";
	cout << "\n*******************************************";
	cout << "\n*             CALIFICACION                *";
	cout << "\n*   Matricula del alumno: " << calificacion1.getMatriculaAlumno();
	cout << "\n*   Clave de la clase: " << calificacion1.getClaveClase();
	cout << "\n*   Calificación: " << calificacion1.getCalificacion();
	cout << "\n*   Estado: " << calificacion1.getEstado();
	cout << "\n*******************************************\n";
}
