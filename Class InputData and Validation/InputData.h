/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/
/***********************************************************************
 * Module:  IngresoDatos.h
 * Author:  Abigail Cabascango
 * Modified: domingo, 28 de mayo de 2020 17:51:04
 * Purpose: Ingresar datos por consola
 ***********************************************************************/
#if !defined(__Input_Data_h)
#define __Input_Data_h

#include<iostream>
#include"Check.h"

using namespace std;

class InputData{
public:
	InputData();
	string matrizFloatDouble(int, int);
	string matrizInteger(int, int);
	string integer(string);
	string positiveInteger(string);
	string floatDouble();
	string integerArray(int i);
	string realArray(int);
private:
    Check check;		
};
////////////////////////////////////////////////////////////////////////
// Name:       IngresoDatos::IngresoDatos()
// Purpose:    Constructor of  class IngresoDatos
// Parameters: 
////////////////////////////////////////////////////////////////////////
 InputData::InputData(){}

////////////////////////////////////////////////////////////////////////
// Name:      string IngresoDatos::ingresar(int i)
// Purpose:    Implementation of  IngresoDatos::ingresar(int i)
// Parameters: int i
// Return:     string
////////////////////////////////////////////////////////////////////////

string InputData::realArray(int i){	
 	string value;
 	cout << "\nIngrese valor real["  << i <<  "]: ";
 	cin  >> value;
 	while (check.floatDouble(value)) {
 		cout << "\nIngreso erroneo, vuelva a ingresar: ";
 		cin  >> value;
	}
	return value;
}
string InputData::integerArray(int i){
 	string value;
 	cout << "\nIngrese valor entero["   << i << "]: ";
 	cin  >> value;
 	while (check.integer(value)) {
 		cout << "\nIngreso erroneo, vuelva a ingresar: ";
 		cin  >> value;
	}
	return value;
}
string InputData::floatDouble(){
 	string value;
 	cout << "\nIngrese valor real:  ";
 	cin  >> value;
 	while (check.floatDouble(value)) {
 		cout << "\nIngreso erroneo, vuelva a ingresar: ";
 		cin  >> value;
    }
	return value;
}

////////////////////////////////////////////////////////////////////////
// Name:      string IngresoDatos::ingresar(int i)
// Purpose:    Implementation of  IngresoDatos::ingresar()
// Parameters: 
// Return:     string
////////////////////////////////////////////////////////////////////////
string InputData::positiveInteger(string message){
 	string value;
 	cout << message;
 	cin  >> value;
 	while (check.positiveInteger(value)) {
 		cout << "\nIngreso erroneo, vuelva a ingresar: ";
 		cin >> value;
	}
	return value;
}
////////////////////////////////////////////////////////////////////////
// Name:      string IngresoDatos::ingresar(int i)
// Purpose:    Implementation of  IngresoDatos::ingresar(string mensage)
// Parameters: string mensage
// Return:     string
////////////////////////////////////////////////////////////////////////
string InputData::integer(string message){
 	string value;
 	cout << message;
 	cin  >> value;
 	while (check.integer(value)) {
 		cout << "\nIngreso erroneo, vuelva a ingresar: ";
 		cin  >> value;
	}
	return value;
}
////////////////////////////////////////////////////////////////////////
// Name:      IngresoDatos::ingresar(int i, int j)
// Purpose:    Implementation of  IngresoDatos::ingresar(int i, int j)
// Parameters: int i, int j
// Return:     string
////////////////////////////////////////////////////////////////////////
string InputData::matrizInteger(int i, int j){	
 	string value;
 	cout << "\nIngrese valor[" << i << "][" << j << "]: ";
 	cin  >> value;
 	while (check.integer(value)) {
 		cout << "\nIngreso erroneo, vuelva a ingresar: ";
 		cin  >> value;
	}
	return value;
}
string InputData::matrizFloatDouble(int i, int j){
 	string value;
 	cout << "\nIngrese valor[" << i << "][" << j <<  "]: ";
 	cin  >> value;
 	while (check.floatDouble(value)) {
 		cout << "\nIngreso erroneo, vuelva a ingresar: ";
 		cin  >> value;
	}
	return value;
}
#endif