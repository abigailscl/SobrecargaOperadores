
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

/**@brief  Constructor of class Pareja
@param const Pareja& p
@returns void
*/
Pareja::Pareja(const Pareja& p)
{
    
}
//....................................

/**@brief  Function of operator +
@param template<class T>
@returns Pareja&
*/
template<class T>
Pareja& Pareja::operator + (T p)
{
    this->a += p.a;
    this->b += p.b;
    return *this;
}

/**@brief  Function of operator -
@param template<class T>
@returns Pareja&
*/
template<class T>
Pareja& Pareja::operator - (T p)
{
    this->a -= p.a;
    this->b -= p.b;
    return *this;
}
/**@brief  Function of operator *
@param template<class T>
@returns Pareja&
*/
template<class T>
Pareja& Pareja::operator * (T p)
{
    this->a *= p.a;
    this->b *= p.b;
    return *this;
}
/**@brief  Function of operator /
@param template<class T>
@returns Pareja&
*/
template<class T>
Pareja& Pareja::operator / (T p)
{
    if (p.a != 0) this->a /= p.a;
    if (p.b != 0) this->b /= p.b;
    return *this;
}
/**@brief  Function of operator =
@param template<class T>
@returns Pareja&
*/
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

/**@brief  Function of operator %
@param template<class T>
@returns Pareja&
*/
template<class T>
Pareja& Pareja::operator % (T p)
{
    if (p.a != 0) this->a %= p.a;
    if (p.b != 0) this->b %= p.b;
    return *this;
}


/**@brief  Function of operator ++
@param template<class T>
@returns Pareja&
*/
template<class T>
Pareja& Pareja::operator ++ (T p)
{
    this->a++;
    this->b++;
    return *this;
}

/**@brief  Function of operator --
@param template<class T>
@returns Pareja&
*/
template<class T>
Pareja& Pareja::operator -- (T p)
{
    this->a--;
    this->b--;
    return *this;
}

/**@brief  Function of operator ==
@param template<class T>
@returns Pareja&
*/
template<class T>
bool Pareja::operator == (T p) 
{
    return this->a == p.a && this->b == p.b;
}

/**@brief  Function friend iostream
@param ostream& o
@param const Pareja& p
@returns Pareja&
*/
// implemetaci¢n de operadores no miembros
ostream& operator << (ostream& o, const Pareja& p)
{
    o << "(" << p.a << ", " << p.b << ")";
    return o;
}
/**@brief  Function friend iostream
@param istream& i
@param const Pareja& p
@returns Pareja&
*/
istream& operator >> (istream& i, Pareja& p)
{
    cout << "Introducir valores para ( a, b) :";
    i >> p.a >> p.b;
    i.ignore();
    return i;
}
/**@brief  Function of operator &&
@param template<class T>
@returns bool
*/
template<class T>
bool Pareja::operator && (T p)
{
    if (this->a == p.a && this->b == p.b)
        return true;
    else
        return false;
}
/**@brief  Function of operator ||
@param template<class T>
@returns bool
*/
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

/**@brief  Function of operator ^
@param template<class T>
@returns bool
*/
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

/**@brief  Function of operator <
@param template<class T>
@returns bool
*/
template<class T>
bool Pareja::operator < (T p)
{
    if ((this->a < p.a) && (this->b < p.b))
        return true;
    else
        return false;
}
/**@brief  Function of operator >
@param template<class T>
@returns bool
*/
template<class T>
bool Pareja::operator > (T p)
{
    if ((this->a > p.a) && (this->b > p.b))
        return true;
    else
        return false;
}
/**@brief  Function of operator !=
@param template<class T>
@returns bool
*/
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

/**@brief  Function of operator |=
@param template<class T>
@returns bool
*/
template<class T>
Pareja& Pareja::operator |= (T p)
{
    this->a |= p.a;
    this->b |= p.b;
    return *this;
}


#endif


