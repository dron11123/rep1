
#include "pch.h"
#include <iostream>

//	EXE 1
/*Объявить массив из n=10 целых чисел, проинициализировать нулями.
Функция ProcessArray() должна заполнить массив членами геометрической прогрессии с начальным элементом b1 и шагом q (ввести с клавиатуры),
подсчитать и вернуть cnt – количество всех трехзначных элементов массива,
а также сформировать выходной массив, который содержит все элементы исходного, кроме тех, которые делятся на 3 с остатком 1.
Вывести все массивы.
*/
//ПРИВЕТ АНДРЕЙ

void OutputArray(int arr[], size_t arr_size)
{
	for (int i = 0; i < arr_size; i++) std::cout << arr[i] << " ";
}



void processArray(int arr[], int output[], size_t arr_size, int first, int coef)
{
	int count = 0;
	arr[0] = first;
	for (int i = 1; i < arr_size; i++) {
		arr[i] = arr[i - 1] * coef;
		if (arr[i] < 1000 && arr[i] > 99) count++;
	}
	for (int i = 0; i < arr_size; i++) {
		if (arr[i] % 3 != 1) output[i] = arr[i];
	}

}


int main()
{
   
	/*  VARIABLES  */
	const size_t N = 10;
	
	int b1 = 0;
	int q = 0;
	int a[N] =  {0};
	int c[N];

	std::cout << "введите первый элемент"std::endl;
	std::cin >> b1;
	std::cout << "введите множитель"std::endl;
	std::cin >> q;



	processArray(a, c, N, b1, q);

}