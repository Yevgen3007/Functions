#include <iostream>
#define TAB "\t\t\t\t"
const int ROWS = 10;
const int COLS = 5;
using namespace std;
void FillRand(int arr[], const int N);
void FillRand(double arr[], const int N);
void FillRand(float arr[], const int N);
void FillRand(char arr[], const int N);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);
void PrintArr(int arr[], const int N);
void PrintArr(double arr[], const int N);
void PrintArr(float arr[], const int N);
void PrintArr(char arr[], const int N);
void PrintArr(int arr[ROWS][COLS], const int ROWS, const int COLS);
void PrintArr(double arr[ROWS][COLS], const int ROWS, const int COLS);
void PrintArr(float arr[ROWS][COLS], const int ROWS, const int COLS);
void PrintArr(char arr[ROWS][COLS], const int ROWS, const int COLS);
void ReversPrintArr(int arr[], const int N);
void ReversPrintArr(double arr[], const int N);
void ReversPrintArr(float arr[], const int N);
void ReversPrintArr(char arr[], const int N);
void ReversPrintArr(int arr[ROWS][COLS], const int ROWS, const int COLS);
void ReversPrintArr(double arr[ROWS][COLS], const int ROWS, const int COLS);
void ReversPrintArr(float arr[ROWS][COLS], const int ROWS, const int COLS);
void ReversPrintArr(char arr[ROWS][COLS], const int ROWS, const int COLS);
int SummArr(int arr[], const int N);
double SummArr(double arr[], const int N);
float SummArr(float arr[], const int N);
char SummArr(char arr[], const int N);
int SummArr(int arr[ROWS][COLS], const int ROWS, const int COLS);
double SummArr(double arr[ROWS][COLS], const int ROWS, const int COLS);
float SummArr(float arr[ROWS][COLS], const int ROWS, const int COLS);
char SummArr(char arr[ROWS][COLS], const int ROWS, const int COLS);
double AvgArr(int arr[], const int N);
double AvgArr(double arr[], const int N);
double AvgArr(float arr[], const int N);
double AvgArr(char arr[], const int N);
int minValueInArr(int arr[], const int N);
int maxValueInArr(int arr[], const int N);
void shiftLeft(int arr[], const int N, int step);
void shiftRight(int arr[], const int N, int step);
void Sort(int arr[], const int n);
void UniqueRand(int arr[], const int n);
void main()
{
	setlocale(LC_ALL, "");
	const int N = 10;
	int arr_int[N];
	double arr_double[N];
	float arr_float[N];
	char arr_char[N];
	double multiarr[ROWS][COLS];
	FillRand(arr_int, N);
	FillRand(arr_double, N);
	FillRand(arr_float, N);
	FillRand(arr_char, N);
	FillRand(multiarr, ROWS, COLS);
	cout << TAB << "INT" << endl;
	PrintArr(arr_int, N);
	cout << TAB << "DOUBLE" << endl;
	PrintArr(arr_double, N);
	cout << TAB << "FLOAT" << endl;
	PrintArr(arr_float, N);
	cout << TAB << "CHAR" << endl;
	PrintArr(arr_char, N);
	cout << TAB << "MULTIARR" << endl;
	PrintArr(multiarr, ROWS, COLS);
	cout << endl << endl;
	ReversPrintArr(arr_int, N);
	cout << endl << endl;
	ReversPrintArr(multiarr, ROWS, COLS);
	cout << endl << endl;
	cout << "Сумма элементов массива: " << SummArr(arr_float, N) << endl;
	cout << "Среднее арифметическое элементов массива: " << AvgArr(arr_int, N) << endl;
	cout << "Минимальный элемент массива: " << minValueInArr(arr_int, N) << endl;
	cout << "Максимальный элемент массива: " << maxValueInArr(arr_int, N) << endl;
	int step;
	cout << "На сколько двигаем? "; cin >> step;
	while (step > N) step -= N; // Чтобы двигать с шагом больше, чем N
	cout << endl;
	cout << "\t\t\t" << "Сдвиг влево" << endl;
	shiftLeft(arr_int, N, step);
	PrintArr(arr_int, N);
	cout << endl;
	cout << "\t\t\t" << "Сдвиг вправо" << endl;
	shiftRight(arr_int, N, step);
	PrintArr(arr_int, N);
	cout << endl;
	cout << "\t\t\t" << "Массив уникальных чисел" << endl;
	UniqueRand(arr_int, N);
	PrintArr(arr_int, N);
	Sort(arr_int, N);
	PrintArr(arr_int, N);
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
void FillRand(float arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= (float)1.5;
	}
}
void FillRand(char arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = (char)rand() % 255;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			arr[i][j] /= 1.5;
		}
	}
}
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			arr[i][j] /= (float)1.5;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = (char)rand() % 255;
		}
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
void PrintArr(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
void PrintArr(float arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
void PrintArr(char arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
void PrintArr(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void PrintArr(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void PrintArr(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void PrintArr(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void ReversPrintArr(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[N - i - 1] << '\t';
	}
	cout << endl;
}
void ReversPrintArr(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[N - i - 1] << '\t';
	}
	cout << endl;
}
void ReversPrintArr(float arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[N - i - 1] << '\t';
	}
	cout << endl;
}
void ReversPrintArr(char arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[N - i - 1] << '\t';
	}
	cout << endl;
}
void ReversPrintArr(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[ROWS - i - 1][COLS - j - 1] << "\t";
		}
		cout << endl;
	}
}
void ReversPrintArr(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[ROWS - i - 1][COLS - j - 1] << "\t";
		}
		cout << endl;
	}
}
void ReversPrintArr(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[ROWS - i - 1][COLS - j - 1] << "\t";
		}
		cout << endl;
	}
}
void ReversPrintArr(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[ROWS - i - 1][COLS - j - 1] << "\t";
		}
		cout << endl;
	}
}
int SummArr(int arr[], const int N)
{
	int summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}
double SummArr(double arr[], const int N)
{
	double summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}
float SummArr(float arr[], const int N)
{
	float summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}
char SummArr(char arr[], const int N)
{
	char summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}
int SummArr(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += arr[ROWS][COLS];
		}
	}
	return summ;
}
double SummArr(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += arr[ROWS][COLS];
		}
	}
	return summ;
}
float SummArr(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += arr[ROWS][COLS];
		}
	}
	return summ;
}
char SummArr(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char summ = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summ += arr[ROWS][COLS];
		}
	}
	return summ;
}
double AvgArr(int arr[], const int N)
{
	return (double)SummArr(arr, N) / N;
}
double AvgArr(double arr[], const int N)
{
	return (double)SummArr(arr, N) / N;
}
double AvgArr(float arr[], const int N)
{
	return (double)SummArr(arr, N) / N;
}
double AvgArr(char arr[], const int N)
{
	return (double)SummArr(arr, N) / N;
}
int minValueInArr(int arr[], const int N)
{
	int min = INT_MAX;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int maxValueInArr(int arr[], const int N)
{
	int max = INT_MIN;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
void shiftLeft(int arr[], const int n, int step)
{
	for (int i = 0; i < step; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}
}
void shiftRight(int arr[], const int n, int step)
{
	shiftLeft(arr, n, n - step);
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
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