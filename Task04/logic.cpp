﻿// Сумма элементов [The Sum of elements]
//
// Необходимо разработать функцию, которая вычисляет 
// сумму элементов массива, расположенных между первыми
// максимальным по модулю и минимальным по модулю элементами.

#include "logic.h"

int get_max_index(int* array, int size) {
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (abs(array[i]) > abs(array[index])) {
			index = i;
		}

	}
	return index;
}

int get_min_index(int* array, int size) {
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (abs(array[i]) < abs(array[index])) {
			index = i;
		}

	}
	return index;
}

int sum_between_first_min_max(int* array, int size) {
	int max_index = get_max_index(array, size);
	int min_index = get_min_index(array, size);
	int sum = 0;

	if (min_index > max_index) {
		int t = min_index;
		min_index = max_index;
		max_index = t;

	}
	for (int i = min_index + 1; i < max_index; i++)
	{
		sum += array[i];
	}


	return sum;
}