/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
******************************************************************/

/***********************************************************************
 * Module:  IngresoDatos.h
 * Author:  Carlos Romero, Abigail Cabascango
 * Modified: viernes, 12 de junio de 2020 17:51:04
 * Purpose: Ingresar datos por consola
 **********************************************************************/
 #include <iostream>
#include "Operators.h"

using namespace std;

int main(int argc, char** argv) {
    Pareja A(150,  75);
    Pareja B(100, 15);
    Pareja  C;
    
	cout << "A = " << A     << "\n";
    cout << "B = " << B     << "\n";
    cout << "........................." << endl;
    cout<<"Operador +"     << endl;
    C = A + B;
    cout << "A = " << A     << "\n";
    cout << "C = " << C     << endl;
    cout << "........................." << endl;
	cout<<"Operador -"     << endl;
	C = A - B;
    cout << "A = " << A     << "\n";
    cout << "C = " << C     << endl;
    cout << "........................." << endl;
    cout<<"Operador *"     << endl;
 	C = A * B;
    cout << "A = " << A     << "\n";
    cout << "C = " << C     << endl;
    cout << "........................." << endl;   
 	cout<<"Operador /"     << endl;
 	C = A / B;
    cout << "A = " << A     << "\n";
    cout << "C = " << C     << endl;
    cout << "........................." << endl;   
    cout<<"Operador %"     << endl;
    C = A % B;
    cout << "A = " << A     << "\n";
    cout << "C = " << C     << endl;
    cout << "........................." << endl;
    cout<<"Operador ++"     << endl;
	C++;
    cout << "C = " << C     << endl;
    cout << "A == B"    << ((A == B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout<<"Operador --"     << endl;
	C--;
    cout << "C = " << C     << endl;
    cout << "A == B"    << ((A == B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout<<"Operador ++"     << endl;
    C = A = B = C++;
    cout << "A = " << A     << "\n";
    cout << "B = " << B     << "\n";
    cout << "B = " << B     << endl;
    cout << "........................." << endl;
    cout<<"Operador ||"     << endl;
    cout << "C = " << C     << endl;
    cout << "A = " << A     << endl;
    cout << "B = " << B     << endl;
    cout << "(A || B)"  << ((A || B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout << "Operador &&"   << endl;
    cout << "C = " << C     << endl;
    cout << "A = " << A     << endl;
    cout << "B = " << B     << endl;
    cout << "(A && B)"  << ((A && B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout << "Operador <"    << endl;
    cout << "C = " << C     << endl;
    cout << "A = " << A     << endl;
    cout << "B = " << B     << endl;
    cout << "(A < B)"   << ((A < B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout << "Operador >"    << endl;
    cout << "C = " << C     << endl;
    cout << "A = " << A     << endl;
    cout << "B = " << B     << endl;
    cout << "(A > B)"   << ((A > B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    cout<<"operador ^"      << endl;
    cout << "C = " << C     << endl;
    cout << "A = " << A     << endl;
    cout << "B = " << B     << endl;
    cout << "(A ^ B)"   << ((A ^ B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
    
	
    cout<<"operador !="<< endl;
    cout << "C = " << C << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "(A != B)" << ((A != B) ? "  True \n" : "  False  \n");
    cout << "........................." << endl;
	
    cout<<"operador |="<< endl;
    cout << "B = " << B << endl;
    cout << "A = " << A << endl;
   	A|=B ;
    cout << "A |=B " << A<< endl;
    cout << "........................." << endl;
	return 0;
}
