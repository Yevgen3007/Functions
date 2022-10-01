#include"Statistics.h"
#include"stdafx.h"
int SummArr(int arr[], const int N)
{
	int summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}
double AvgArr(int arr[], const int N)
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