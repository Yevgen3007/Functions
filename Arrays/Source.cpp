#include <iostream>
using namespace std;
void FillRand(int arr[], const int N);
void PrintArr(int arr[], const int N);
void ReversPrintArr(int arr[], const int N);
void SummArr(int arr[], const int N);
void AvgArr(int arr[], const int N);
void minValueInArr(int arr[], const int N);
void maxValueInArr(int arr[], const int N);
void shiftLeft(int arr[], const int N, int step);
void shiftRight(int arr[], const int N, int step);
void UniqueRand(int arr[], const int N);
void main()
{
	setlocale(LC_ALL, "");
	const int N = 10;
	int arr[N];
	FillRand(arr, N);
	PrintArr(arr, N);
	ReversPrintArr(arr, N);
	SummArr(arr, N);
	AvgArr(arr, N);
	minValueInArr(arr, N);
	maxValueInArr(arr, N);
	int step;
	char side;
	cout << "На сколько двигаем? "; cin >> step;
	cout << "Куда двигаем? '+' - вправо, '-' - влево  "; cin >> side;
	while (step > N) step -= N; // Чтобы двигать с шагом больше, чем N
	switch (side)
	{
	case '-':shiftLeft(arr, N, step); break;
	case '+':shiftRight(arr, N, step); break;
	default: main();
	}
	UniqueRand(arr, N);
	cout << endl << "\t\t\t" << "Массив уникальных чисел" << endl;
	PrintArr(arr, N);
}
void FillRand(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
	}
}
void PrintArr(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
void ReversPrintArr(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[N - i - 1] << '\t';
	}
	cout << endl;
}
void SummArr(int arr[], const int N)
{
	int summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	cout << "Сумма элементов массива: " << summ << endl;
}
void AvgArr(int arr[], const int N)
{
	int summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	cout << "Среднее арифметическое элементов массива: " << summ / N << endl;
}
void minValueInArr(int arr[], const int N)
{
	int min = INT_MAX;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	cout << "Минимальный элемент массива: " << min << endl;
}
void maxValueInArr(int arr[], const int N)
{
	int max = INT_MIN;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	cout << "Максимальный элемент массива: " << max << endl;
}
void shiftLeft(int arr[], const int N, int step)
{
	for (int i = 0; i < N; i++)
	{
		if (i + step > N - 1) cout << arr[i + step - N] << '\t';
		else cout << arr[i + step] << '\t';
	}
	cout << endl;
}
void shiftRight(int arr[], const int N, int step)
{
	for (int i = 0; i < N; i++)
	{
		if (i - step < 0) cout << arr[N + i - step] << '\t';
		else cout << arr[i - step] << '\t';
	}
	cout << endl;
}
void UniqueRand(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j) continue;
			while (arr[i] == arr[j])
			{
				arr[j] = rand() % 100;
			}
		}
	} //Проверка чисел на уникальность
}