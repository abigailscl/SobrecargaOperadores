// BurbleRecursive.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sort.h"

int main()
{
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
