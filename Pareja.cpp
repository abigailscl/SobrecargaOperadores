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

#include "Pareja.h"
#include <iostream>

using namespace std;


////////////////////////////////////////////////////////////////////////
// Name:      Pareja::Pareja(const Pareja& p)
// Purpose:    Constructor of class Pareja 
// Parameters: const Pareja& p
// Return:     string
////////////////////////////////////////////////////////////////////////


//....................................
Pareja::Pareja(const Pareja& p)
{
    
}
//....................................

////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja& Pareja::operator + (T p)
// Purpose:    Implement of Pareja::operator + (T p)
// Parameters: T p
// Return:     Pareja&
////////////////////////////////////////////////////////////////////////
template<class T>
Pareja& Pareja::operator + (T p)
{
    this->a += p.a;
    this->b += p.b;
    return *this;
}
//....................................
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja& Pareja::operator - (T p)
// Purpose:    Implement of Pareja::operator - (T p)
// Parameters: T p
// Return:     Pareja&
////////////////////////////////////////////////////////////////////////
template<class T>
Pareja& Pareja::operator - (T p)
{
    this->a -= p.a;
    this->b -= p.b;
    return *this;
}
//....................................
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja& Pareja::operator * (T p)
// Purpose:    Implement of Pareja::operator * (T p)
// Parameters: T p
// Return:     Pareja&
////////////////////////////////////////////////////////////////////////
template<class T>
Pareja& Pareja::operator * (T p)
{
    this->a *= p.a;
    this->b *= p.b;
    return *this;
}
//....................................
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja& Pareja::operator / (T p)
// Purpose:    Implement of Pareja::operator / (T p)
// Parameters: T p
// Return:     Pareja&
////////////////////////////////////////////////////////////////////////
template<class T>
Pareja& Pareja::operator / (T p)
{
    if (p.a != 0) this->a /= p.a;
    if (p.b != 0) this->b /= p.b;
    return *this;
}
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja::operator = (T p)
// Purpose:    Implement of Pareja::operator = (T p)
// Parameters: T p
// Return:     Pareja&
////////////////////////////////////////////////////////////////////////
template<class T>
Pareja& Pareja::operator = (T p)
{
    if (this != &p) { //Comprueba que no se esté intentanod igualar un objeto a sí mismo
        if (p.a != 0) this->a = p.a;
        if (p.b != 0) this->b = p.b;
    }
    return *this;
}
//....................................

////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja::operator % (T p)
// Purpose:    Implement of Pareja::operator % (T p)
// Parameters: T p
// Return:     Pareja&
////////////////////////////////////////////////////////////////////////
template<class T>
Pareja& Pareja::operator % (T p)
{
    if (p.a != 0) this->a %= p.a;
    if (p.b != 0) this->b %= p.b;
    return *this;
}
//....................................
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja::operator ++ (T p)
// Purpose:    Implement of Pareja::operator ++ (T p)
// Parameters: T p
// Return:     Pareja&
////////////////////////////////////////////////////////////////////////
template<class T>
Pareja& Pareja::operator ++ (T p)
{
    this->a++;
    this->b++;
    return *this;
}
//....................................
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja:: operator -- (T p)
// Purpose:    Implement of Pareja::operator -- (T p)
// Parameters: T p
// Return:     Pareja&
////////////////////////////////////////////////////////////////////////
template<class T>
Pareja& Pareja::operator -- (T p)
{
    this->a--;
    this->b--;
    return *this;
}
//....................................
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja::operator == (T p) 
// Purpose:    Implement of Pareja::operator == (T p) 
// Parameters: T p
// Return:     bool
////////////////////////////////////////////////////////////////////////
template<class T>
bool Pareja::operator == (T p) 
{
    return this->a == p.a && this->b == p.b;
}
////////////////////////////////////////////////////////////////////////
// Name:      ostream& operator << (ostream& o, const Pareja& p)
// Purpose:    ostream& operator << (ostream& o, const Pareja& p)
// Parameters: ostream& o, const Pareja& p
// Return:     ostream& 
////////////////////////////////////////////////////////////////////////
// implemetaci¢n de operadores no miembros
ostream& operator << (ostream& o, const Pareja& p)
{
    o << "(" << p.a << ", " << p.b << ")";
    return o;
}
////////////////////////////////////////////////////////////////////////
// Name:      ostream& operator << (ostream& o, const Pareja& p)
// Purpose:    ostream& operator << (ostream& o, const Pareja& p)
// Parameters: istream& i, Pareja& p
// Return:     ostream& 
////////////////////////////////////////////////////////////////////////
istream& operator >> (istream& i, Pareja& p)
{
    cout << "Introducir valores para ( a, b) :";
    i >> p.a >> p.b;
    i.ignore();
    return i;
}
////////////////////////////////////////////////////////////////////////
// Name:      ostream& operator << (ostream& o, const Pareja& p)
// Purpose:    ostream& operator << (ostream& o, const Pareja& p)
// Parameters: ostream& o, const Pareja& p
// Return:     ostream& 
////////////////////////////////////////////////////////////////////////
template<class T>
bool Pareja::operator && (T p)
{
    if (this->a == p.a && this->b == p.b)
        return true;
    else
        return false;
}
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja::operator || (T p)
// Purpose:    Implement of Pareja::operator || (T p)
// Parameters: T p
// Return:     bool
////////////////////////////////////////////////////////////////////////
template<class T>
bool Pareja::operator || (T p)
{

	if (this->a == p.a || this->b == p.b )
	{
		return true;
		
	}else{
		return false;
	}
}
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja::operator ^ (T p)
// Purpose:    Implement of Pareja::operator ^ (T p)
// Parameters: T p
// Return:     bool
////////////////////////////////////////////////////////////////////////
template<class T>
bool Pareja::operator ^ (T p)
{

	if ((this->a == p.a) != (this->b == p.b ))
	{
		return true;
		
	}else{
		return false;
	}
}
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja::operator < (T p)
// Purpose:    Implement of Pareja::operator < (T p)
// Parameters: T p
// Return:     bool
////////////////////////////////////////////////////////////////////////
template<class T>
bool Pareja::operator < (T p)
{
    if ((this->a < p.a) && (this->b < p.b))
        return true;
    else
        return false;
}
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja::operator > (T p)
// Purpose:    Implement of Pareja::operator > (T p)
// Parameters: T p
// Return:     bool
////////////////////////////////////////////////////////////////////////
template<class T>
bool Pareja::operator > (T p)
{
    if ((this->a > p.a) && (this->b > p.b))
        return true;
    else
        return false;
}
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja::operator !=(T p)
// Purpose:    Implement of Pareja::operator !=(T p)
// Parameters: T p
// Return:     bool
////////////////////////////////////////////////////////////////////////
template<class T>
 bool Pareja:: operator !=(T p)
 {
	if((this->a != p.a) && (this->b != p.b ))
	{
		return true;
		
	}else{
		return false;
  }
}
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja:: operator -- (T p)
// Purpose:    Implement of Pareja::operator -- (T p)
// Parameters: T p
// Return:     Pareja&
////////////////////////////////////////////////////////////////////////
template<class T>
Pareja& Pareja::operator |= (T p)
{
    this->a |= p.a;
    this->b |= p.b;
    return *this;
}
