
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
 #if !defined(__Operators_h)
#define __Operators_h
 #include <iostream>
using namespace std;
class Pareja {

private:
    int a, b;

public:
    // constructor base
    Pareja() : a(0), b(0) {}

    // constructor parametrizado
    Pareja(const int a, const int b) {
        this->a = a;
        this->b = b;
    }

    // constructor de copia
    Pareja(const Pareja&);

    // operadores miembros
     template<class T>
    Pareja& operator + (T p);
     template<class T>
    Pareja& operator - (T p);
     template<class T>
    Pareja& operator * (T p);
     template<class T>
    Pareja& operator / (T p);
     template<class T>
    Pareja& operator = (T p);
     template<class T>
    Pareja& operator % (T p);
    template<class T>
    Pareja& operator |= (T p);
    template<class T>
    Pareja& operator ++(T p);
     template<class T>
    Pareja& operator --(T p);
     template<class T>
    bool operator ^  (T p);
     template<class T>
    bool operator || (T p);
     template<class T>
    bool operator && (T p);
     template<class T>
    bool operator <  (T p);
     template<class T>
    bool operator > (T p);
     template<class T>
    bool operator == (T p);
     template<class T>
    bool operator != (T p);
    // operadores no miembros
    friend ostream& operator << (ostream& o, const Pareja& p);
    friend istream& operator >> (istream& o, Pareja& p);
};
