#pragma once
#include "stdafx.h"
template <typename T> bool AlreadyDone(T arr[], int i)
{
	for (int k = 0; k < i; k++)
	{
		if (arr[i] == arr[k]) return true;
	}
	return false;
}
template <typename T> void Search(T arr[], const int N)
{
	int total;
	for (int i = 0; i < N; i++)
	{
		if (AlreadyDone(arr, i)) continue; //Если число уже учтено, то его нужно пропустить
		total = 0;
		for (int j = i; j < N; j++)
		{
			if (arr[i] == arr[j])
			{
				total++;
			}
		}
		if (total != 1) cout << "Число: " << arr[i] << "\t\t" << "Количество повторений в массиве: " << total << endl;
		else cout << "Число: " << arr[i] << "\t\t" << "Не повторяется в массиве" << endl; //Можно убрать, по условию задачи не нужна
	}
}