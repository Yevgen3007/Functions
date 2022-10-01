#include "stdafx.h"
#include "Constants.h"
#include "FillRand.h"
#include "Print.h"
#include"Statistics.h"
#include "Shift.h"
#include "Sort.h"
#include"UniqueRand.h"
void main()
{
	setlocale(LC_ALL, "");
	int arr[N];
	FillRand(arr, N);
	PrintArr(arr, N);
	ReversPrintArr(arr, N);
	cout << "Сумма элементов массива: " << SummArr(arr, N) << endl;
	cout << "Среднее арифметическое элементов массива: " << AvgArr(arr, N) << endl;
	cout << "Минимальный элемент массива: " << minValueInArr(arr, N) << endl;
	cout << "Максимальный элемент массива: " << maxValueInArr(arr, N) << endl;
	int step;
	cout << "На сколько двигаем? "; cin >> step;
	while (step > N) step -= N; // Чтобы двигать с шагом больше, чем N
	cout << endl;
	cout << "\t\t\t" << "Сдвиг влево" << endl;
	shiftLeft(arr, N, step);
	PrintArr(arr, N);
	cout << endl;
	cout << "\t\t\t" << "Сдвиг вправо" << endl;
	shiftRight(arr, N, step);
	PrintArr(arr, N);
	cout << endl;
	cout << "\t\t\t" << "Массив уникальных чисел" << endl;
	UniqueRand(arr, N);
	PrintArr(arr, N);
	Sort(arr, N);
	PrintArr(arr, N);
}