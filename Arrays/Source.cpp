#include <iostream>
#define TAB_4 "\t\t\t\t"
#define TAB_1 "\t"
using namespace std;
void FillRand(int arr[], const int N);
void FillRand(double arr[], const int N);
template<typename T>
void PrintArr(T arr[], const int N);
template<typename T>
void ReversPrintArr(T arr[], const int N);
template<typename T>
T SummArr(T arr[], const int N);
template<typename T>
double AvgArr(T arr[], const int N);
template<typename T>
T minValueInArr(T arr[], const int N);
template<typename T>
T maxValueInArr(T arr[], const int N);
template<typename T>
void shiftLeft(T arr[], const int N, int step);
template<typename T>
void shiftRight(T arr[], const int N, int step);
template<typename T>
void Sort(T arr[], const int n);
void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void main()
{
	setlocale(LC_ALL, "");
	const int N = 10;
	int arr[N];
	double arr_d[N];
	FillRand(arr, N);
	FillRand(arr_d, N);
	cout << TAB_4 << "INT";
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
void FillRand(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 1.5;
	}
}
template<typename T>
void PrintArr(T arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
template<typename T>
void ReversPrintArr(T arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[N - i - 1] << '\t';
	}
	cout << endl;
}
template<typename T>
T SummArr(T arr[], const int N)
{
	T summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}
template<typename T>
double AvgArr(T arr[], const int N)
{
	return (double)SummArr(arr, N) / N;
}
template<typename T>
T minValueInArr(T arr[], const int N)
{
	T min = INT_MAX;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template<typename T>
T maxValueInArr(T arr[], const int N)
{
	T max = INT_MIN;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
template<typename T>
void shiftLeft(T arr[], const int n, int step)
{
	for (int i = 0; i < step; i++)
	{
		T temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}
}
template<typename T>
void shiftRight(T arr[], const int n, int step)
{
	shiftLeft(arr, n, n - step);
}
template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % (n + 2);
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
}
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = (rand() % (n + 2)) * 0.9;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
}