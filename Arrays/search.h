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
		if (AlreadyDone(arr, i)) continue; //���� ����� ��� ������, �� ��� ����� ����������
		total = 0;
		for (int j = i; j < N; j++)
		{
			if (arr[i] == arr[j])
			{
				total++;
			}
		}
		if (total != 1) cout << "�����: " << arr[i] << "\t\t" << "���������� ���������� � �������: " << total << endl;
		else cout << "�����: " << arr[i] << "\t\t" << "�� ����������� � �������" << endl; //����� ������, �� ������� ������ �� �����
	}
}