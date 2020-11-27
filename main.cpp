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

Alumno alumnos[100];
Profesor profes[100];
Clase clases[100];

int numAlumnos = 0 , numProfes = 0, numClases = 0;


void menu();
void agregarAlumno();
void agregarProfesor();
void agregarClase();
void agregarAlumnoClase();
void verClase();
void verAlumno();
void verProfesor();
void modificarCalificacion();


int main(){
	int opcion;
	bool bandera = true;
	while(bandera){
		menu();
		cout<<"\nOpción: "; cin>>opcion;
		cout << "\n*******************************************\n";
		if (opcion == 1){
			agregarAlumno();
		}else if (opcion == 2){
			agregarProfesor();
		}else if (opcion == 3){
			agregarClase();
		}else if (opcion == 4){
			agregarAlumnoClase();
		}else if (opcion == 5){
			verClase();
		}else if (opcion == 6){
			verAlumno();
		}else if (opcion == 7){
			verProfesor();
		}else if (opcion == 8){
			modificarCalificacion();
		}else if (opcion == 9){
			cout<<"\n¡Adios!";
			bandera = false;
		}else {
			cout<<"\n¡Opción no valida!";
			bandera = false;
		}
	}
	return 0;
}

void menu(){
	cout << "\n*******************************************";
	cout << "\n                MENU:\n";
	cout << "*******************************************\n";
    cout << "1. Agregar Alumno. \n";
    cout << "2. Agregar Profesor. \n";
    cout << "3. Agregar Clase. \n";
    cout << "4. Agregar Alumno a Clase. \n";
    
    cout << "5. Ver Clase \n";
    cout << "6. Ver Alumno \n";
    cout << "7. Ver Profesor \n";
    cout << "8. Modificar Calificación\n";
    cout << "9. Salir \n";
    cout << "*******************************************\n";
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
	bool val=true;
	string nombre, correo, direccion, matricula, carrera, numeroTel;
	int edad;
	cout <<  "\n---Agregando Alumno---\n"; 
	cout << "\nNombre: "; cin >> nombre;
	cout << "\nMatricula: "; cin >> matricula;
	for (int i=0; i<numAlumnos;i++){
		if (matricula == alumnos[i].getMatricula()){
			val=false;
			break;
		}	
	}
	if (val){
		cout << "\nCorreo: "; cin >> correo;
		cout << "\nDirección: "; cin >> direccion;
		cout << "\nCarrera: "; cin >> carrera;
		cout << "\nNumero de Telefono: "; cin >> numeroTel;
		cout << "\nEdad: "; cin >> edad;
		alumnos[numAlumnos] = Alumno(nombre, correo, direccion, numeroTel, edad, matricula, carrera);
		cout << "\n       ¡¡¡AGREGADO CON EXITO!!!\n";
		cout << "\n*******************************************";
		cout << "\n*              CREDENCIAL                 *";
		cout << "\n*   Nombre: " << alumnos[numAlumnos].getNombre();
		cout << "\n*   Matricula: " << alumnos[numAlumnos].getMatricula();
		cout << "\n*   Numero: " << alumnos[numAlumnos].getNumeroTel();
		cout << "\n*   Edad: " << alumnos[numAlumnos].getEdad() << " 	Carrera: " << alumnos[numAlumnos].getCarrera();
		cout << "\n*   Correo: " << alumnos[numAlumnos].getCorreo();
		cout << "\n*   Dirección: " << alumnos[numAlumnos].getDireccion();
		cout << "\n*******************************************\n";
		numAlumnos++;
	}else{
		cout << "\n       ¡¡¡ERROR YA ESTA REGISTRADO!!!\n";
	}
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
	bool val=true;
	string nombre, correo, direccion, clave, area, numeroTel;
	int edad;
	cout <<  "\n---Agregando Profesor---\n"; 
	cout << "\nNombre: "; cin >> nombre;
	cout << "\nClave: "; cin >> clave;
	for (int i=0; i<numProfes;i++){
		if (clave == profes[i].getClave()){
			val=false;
			break;
		}	
	}
	if (val){
		cout << "\nCorreo: "; cin >> correo;
		cout << "\nDirección: "; cin >> direccion;
		cout << "\nÁrea: "; cin >> area;
		cout << "\nNumero de Telefono: "; cin >> numeroTel;
		cout << "\nEdad: "; cin >> edad;
		profes[numProfes] = Profesor(nombre, correo, direccion, numeroTel, edad, clave, area);
		cout << "\n       ¡¡¡AGREGADO CON EXITO!!!\n";
		cout << "\n*******************************************";
		cout << "\n*              CREDENCIAL                 *";
		cout << "\n*   Nombre: " << profes[numProfes].getNombre();
		cout << "\n*   Clave: " << profes[numProfes].getClave();
		cout << "\n*   Numero: " << profes[numProfes].getNumeroTel();
		cout << "\n*   Edad: " << profes[numProfes].getEdad() << "	Área: " << profes[numProfes].getArea();
		cout << "\n*   Correo: " << profes[numProfes].getCorreo();
		cout << "\n*   Dirección: " <<profes[numProfes].getDireccion();
		cout << "\n*******************************************\n";
		numProfes++;	
	}else{
		cout << "\n       ¡¡¡ERROR!!!\n";
	}
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
	bool val=true;
	string nombre, clave, claveProfesor;
	cout <<  "\n---Agregando Clase---\n"; 
	cout << "\nNombre: "; cin >> nombre;
	cout << "\nClave de la clase: "; cin >> clave;
	for (int j=0; j<numClases;j++){
		if (clave == clases[j].getClave()){
			val=false;
			break;
		}	
	}
	if (val){
		cout << "\nClave del profesor: "; cin >> claveProfesor;
		for (int i=0;i<numProfes;i++){
			if (claveProfesor==profes[i].getClave()){
				clases[numClases] = Clase(clave, nombre, profes[i]);
				cout << "\n       ¡¡¡AGREGADO CON EXITO!!!\n";
				cout << "\n*******************************************";
				cout << "\n*                  CLASE                  *";
				cout << "\n*   Nombre: " << clases[numClases].getNombre();
				cout << "\n*   Clave de la clase: " << clases[numClases].getClave();
				cout << "\n*   Clave del profesor: " << clases[numClases].getProfesor().getClave();
				cout << "\n*******************************************\n";
				numClases++;
			}
		}
	}else{
		cout << "\n       ¡¡¡ERROR!!!\n";
	}
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
void agregarAlumnoClase(){
	string matriculaAlumno, claveClase;
	bool val=true, valR=true;
	cout <<  "\n---Agregando Alumno a Clase---\n"; 
	cout << "\nMatricula del alumno: "; cin >> matriculaAlumno;
	for (int i=0; i<numAlumnos;i++){
		if (matriculaAlumno==alumnos[i].getMatricula())
		cout << "\nClave de la clase: "; cin >> claveClase;
		for (int j=0;j<numClases;j++){
			if ((claveClase==clases[j].getClave())&&(clases[i].getNumCalif()!=35)){
				for (int k=0;k<clases[j].getNumCalif();k++){
					if (matriculaAlumno == clases[j].getCalificacion(j).getAlumno().getMatricula()){
						valR=false;
						break;
					}
				}
				if (valR){
					clases[j].agregarCalificacion(alumnos[i],0);
					cout << "\n*******************************************";
					cout << "\n       ¡¡¡AGREGADO CON EXITO!!!\n";
					cout << "\n*******************************************\n";
					val=false;
					break;
				}
			}
		}
	}
	if (val){
		cout << "\n       ¡¡¡NO ENOCNTRADO!!!\n";
	}
}


void verClase(){
	string cClase;
	bool val=true;
	cout <<  "\n---Ver Clase---\n"; 
	cout << "Clave de la clase: "; cin>>cClase;
	for (int i=0;i<numClases;i++){
		if (cClase==clases[i].getClave()){
			cout << "\n*******************************************";
			cout << "\n*                  CLASE                  *";
			cout << "\n*   Nombre: " << clases[i].getNombre();
			cout << "\n*   Clave de la clase: " << clases[i].getClave();
			cout << "\n*   Clave del profesor: " << clases[i].getProfesor().getClave();
			cout << "\n*******************************************\n";	
			cout << "\n\nLista de Alumnos";
			cout << "\n-----------------------------------------";
			for (int j=0;j<clases[i].getNumCalif();j++){
				cout << "\n" << clases[i].getCalificacion(j).getAlumno().getNombre()<<"\t\t"<<clases[i].getCalificacion(j).getAlumno().getMatricula();
			}
			cout<<"\n\n";
			val=false;
			break;	
		}
	}
	if (val){
		cout << "\n       ¡¡¡NO ENOCNTRADA!!!\n";
	}
}


void verAlumno(){
	string mat;
	bool val=true;
	cout <<  "\n---Ver Alumno---\n"; 
	cout << "Matricula del Alumno: "; cin>>mat;
	for (int i=0;i<numAlumnos;i++){
		if (mat==alumnos[i].getMatricula()){
			cout << "\n*******************************************";
			cout << "\n*              CREDENCIAL                 *";
			cout << "\n*   Nombre: " << alumnos[i].getNombre();
			cout << "\n*   Matricula: " << alumnos[i].getMatricula();
			cout << "\n*   Numero: " << alumnos[i].getNumeroTel();
			cout << "\n*   Edad: " << alumnos[i].getEdad() << " 	Carrera: " << alumnos[i].getCarrera();
			cout << "\n*   Correo: " << alumnos[i].getCorreo();
			cout << "\n*   Dirección: " << alumnos[i].getDireccion();
			cout << "\n*******************************************\n";
			cout << "\n\nClase\tCalificacion\tEstado";
			cout << "\n-----------------------------------------";
			for (int j=0;j<numClases;j++){
				for (int k=0;k<clases[j].getNumCalif();k++){
					if (clases[j].getCalificacion(k).getAlumno().getMatricula()==alumnos[i].getMatricula()){
						cout << "\n" << clases[j].getNombre() << "\t" << clases[j].getCalificacion(k).getCalificacion() << "\t\t" << clases[j].getCalificacion(k).getEstado();
					}
				}
			}
			cout<<"\n\n";	
			val=false;
			break;	
		}
	}
	if (val){
		cout << "\n       ¡¡¡NO ENOCNTRADA!!!\n";
	}
}


void verProfesor(){
	string cProf;
	bool val=true;
	cout <<  "\n---Ver Profesor---\n"; 
	cout << "Clave de Profesor: "; cin>>cProf;
	for (int i=0;i<numProfes;i++){
		if (cProf==profes[i].getClave()){
			cout << "\n*******************************************";
			cout << "\n*              CREDENCIAL                 *";
			cout << "\n*   Nombre: " << profes[i].getNombre();
			cout << "\n*   Clave: " << profes[i].getClave();
			cout << "\n*   Numero: " << profes[i].getNumeroTel();
			cout << "\n*   Edad: " << profes[i].getEdad() << "	Área: " << profes[i].getArea();
			cout << "\n*   Correo: " << profes[i].getCorreo();
			cout << "\n*   Dirección: " <<profes[i].getDireccion();
			cout << "\n*******************************************\n";
			cout << "\n\nClases que imparte";
			cout << "\n-----------------------------------------";
			for (int j=0;j<numClases;j++){
					if (clases[j].getProfesor().getClave()==profes[i].getClave()){
						cout << "\n" << clases[j].getNombre();
					}
			}
			cout << "\n\n";	
			val=false;
			break;	
		}
	}
	if (val){
		cout << "\n       ¡¡¡NO ENOCNTRADA!!!\n";
	}
}


void modificarCalificacion(){
	string matriculaAlumno, claveClase;
	int calif;
	bool val=true;
	cout <<  "\n---Modificar Calificación---\n"; 
	cout << "\nClave de la clase: "; cin >> claveClase;
	for (int j=0;j<numClases;j++){
		if (claveClase==clases[j].getClave()){
			cout << "\nMatricula del alumno: "; cin >> matriculaAlumno;
			for (int i=0; i<clases[j].getNumCalif();i++){
				if (matriculaAlumno==clases[j].getCalificacion(i).getAlumno().getMatricula()){
					do
					{
					cout << "\nNueva Calificacón: "; cin >> calif;
					} while((calif<0) || (calif>100));
					clases[j].setCalificacion(calif,i);
					cout << "\n*******************************************";
					cout << "\n      ¡¡¡ACTUALIZADA CON EXITO!!!\n";
					cout << "\n*******************************************\n\n";
					val=false;
					break;
				}
			}
		}
	}
	if (val){
		cout << "\n       ¡¡¡NO ENOCNTRADO!!!\n";
	}
}

