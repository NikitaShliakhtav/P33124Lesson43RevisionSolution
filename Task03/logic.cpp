// Среднее арифметическое неэкстремальных элементов
// [The arithmetic mean of non - extreme elements]
//
// Дан вектор натуральных чисел. Необходимо разработать 
// функцию, которая вычисляет среднее рифметическое элементов
// вектора без учета минимального и максимального элементов.

#include "logic.h"

int get_max(int* array, int size) {
	int max = array[0];

	for (int i = 1; i < size; i++)
	{
		if (array[i] > max) {
			max = array[i];
		}

	}

	return max;
}

int get_min(int* array, int size) {
	int min = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] < min) {
			min = array[i];
		}

	}

	return min;
}

double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
	int min = get_min(array, size);
	int max = get_max(array, size);
	double sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] != min && array[i] != max) {
			sum += array[i];
			count++;
		}

	}

	return count > 0 ? sum / count : 0;
}

