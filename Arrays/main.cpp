#include "stdafx.h"
#include "CONST.h"
#include "fill_arr.h"
#include "print.h"
#include "statistic.h"
#include "shift.h"
#include "sort.h"
void main()
{
	setlocale(LC_ALL, "");
	const int N = 10;
	int arr[N];
	double arr_d[N];
	FillRand(arr, N);
	FillRand(arr_d, N);
	cout << TAB_4 << "INT"<<endl;
	PrintArr(arr, N);
	cout << endl << TAB_4 << "DOUBLE"<<endl;
	PrintArr(arr_d, N);
	cout << endl << TAB_4 << "INT"<<endl;
	ReversPrintArr(arr, N);
	cout << endl << TAB_4 << "DOUBLE"<<endl;
	ReversPrintArr(arr_d, N);
	cout << endl;
	cout << "Сумма элементов массива INT: " << SummArr(arr, N) << endl;
	cout << "Сумма элементов массива DOUBLE: " << SummArr(arr_d, N) << endl;
	cout << "Среднее арифметическое элементов массива INT: " << AvgArr(arr, N) << endl;
	cout << "Среднее арифметическое элементов массива DOUBLE: " << AvgArr(arr_d, N) << endl;
	cout << "Минимальный элемент массива INT: " << minValueInArr(arr, N) << endl;
	cout << "Минимальный элемент массива DOUBLE: " << minValueInArr(arr_d, N) << endl;
	cout << "Максимальный элемент массива INT: " << maxValueInArr(arr, N) << endl;
	cout << "Максимальный элемент массива DOUBLE: " << maxValueInArr(arr_d, N) << endl;
	cout << endl;
	int step;
	cout << "На сколько двигаем? "; cin >> step;
	while (step > N) step -= N; // Чтобы двигать с шагом больше, чем N
	cout << endl;
	cout << endl << TAB_4 << "INT"<<endl;
	cout << TAB_4 << "Сдвиг влево" << endl;
	shiftLeft(arr, N, step);
	PrintArr(arr, N);
	cout << endl;
	cout << TAB_4 << "Сдвиг вправо" << endl;
	shiftRight(arr, N, step);
	PrintArr(arr, N);
	cout << endl;
	cout << endl << TAB_4 << "DOUBLE"<<endl;
	cout << TAB_4 << "Сдвиг влево" << endl;
	shiftLeft(arr_d, N, step);
	PrintArr(arr_d, N);
	cout << endl;
	cout << TAB_4 << "Сдвиг вправо" << endl;
	shiftRight(arr_d, N, step);
	PrintArr(arr_d, N);
	cout << endl;
	cout << endl;
	cout << TAB_4 << "Массив уникальных чисел INT" << endl;
	UniqueRand(arr, N);
	PrintArr(arr, N);
	cout << endl;
	cout << TAB_4 << "Массив уникальных чисел DOUBLE" << endl;
	UniqueRand(arr_d, N);
	PrintArr(arr_d, N);
	cout << endl;
	cout << TAB_4 << "Сортировка" << endl;
	Sort(arr, N);
	PrintArr(arr, N);
	cout << endl;
	Sort(arr_d, N);
	PrintArr(arr_d, N);
}