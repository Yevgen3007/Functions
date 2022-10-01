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