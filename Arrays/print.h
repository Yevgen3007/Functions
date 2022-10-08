#pragma once
#include "stdafx.h"
template<typename T> void PrintArr(T arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
template<typename T> void ReversPrintArr(T arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[N - i - 1] << "  ";
	}
	cout << endl;
}