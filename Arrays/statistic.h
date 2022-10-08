#pragma once
#include "stdafx.h"
template<typename T> T SummArr(T arr[], const int N)
{
	T summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}
template<typename T> double AvgArr(T arr[], const int N)
{
	return (double)SummArr(arr, N) / N;
}
template<typename T> T minValueInArr(T arr[], const int N)
{
	T min = INT_MAX;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template<typename T> T maxValueInArr(T arr[], const int N)
{
	T max = INT_MIN;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
