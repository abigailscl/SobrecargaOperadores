#pragma once
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
#if !defined(__Sort_h)
#define __Sort_h
template <class T> class Sort {
public:
	void bubbleSort(T*,int);	
	Sort();
private:
	T temp;	
};
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja& Pareja::operator + (T p)
// Purpose:    Constructor of Sort<T>::Sort() { this->temp = NULL; }
// Parameters: 
// Return:     
////////////////////////////////////////////////////////////////////////
template <class T> Sort<T>::Sort() { this->temp = NULL; }
////////////////////////////////////////////////////////////////////////
// Name:      template<class T> Pareja& Pareja::operator + (T p)
// Purpose:    Implemet of Sort<T>::bubbleSort(T* arr, int size)
// Parameters: T* arr, int size
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T> void Sort<T>::bubbleSort(T* arr, int size) {

	if (size == 1)
		return;

	for (size_t i = 0; i < size - 1; i++) {
		if (*(arr + i) > * (arr + (i + 1))) {
			temp = *(arr + i);
			*(arr + i) = *(arr + (i + 1));
			*(arr + (i + 1)) = temp;
		}
	}

	bubbleSort(arr, size - 1);
}
#endif
