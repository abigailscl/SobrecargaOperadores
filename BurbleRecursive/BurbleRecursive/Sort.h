#pragma once
#if !defined(__Sort_h)
#define __Sort_h
template <class T> class Sort {
public:
	void bubbleSort(T*,int);	
	Sort();
private:
	T temp;	
};

template <class T> Sort<T>::Sort() { this->temp = NULL; }

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