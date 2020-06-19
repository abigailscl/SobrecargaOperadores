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
#include "Sort.h"
#include <iostream>
////////////////////////////////////////////////////////////////////////
// Name:      template <typename T> void Sort<T>::bubbleSort(T* arr, int size) 
// Purpose:    Implement of class Sort<T>::bubbleSort(T* arr, int size)  
// Parameters: T* arr, int size
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T> void Sort<T>::bubbleSort(T* arr, int size) {

	if (size == 1)
		return;

	for (size_t i = 0; i < size - 1; i++) {
		if (*(arr + i) > *(arr + (i + 1)))	{
			temp = *(arr + i);
			*(arr + i) = *(arr + (i + 1));
			*(arr + (i + 1)) = temp;
		}
	}

	bubbleSort(arr, size - 1);
}

template <class T> Sort<T>::Sort() { this->temp = NULL;	}

int main() {
	int* arr = new int[7];
	*arr = 5;
	*(arr + 1) = 8;
	*(arr + 2) = 4;
	*(arr + 3) = 3; 
	*(arr + 4) = 4;
	*(arr + 5) = 6;
	*(arr + 6) = 2;
	Sort<int> sort;
	int size = 7;
	sort.bubbleSort(arr, size);	
	for (size_t i = 0; i < 7; i++)
		std::cout << *(arr + i) << std::endl;
}	
