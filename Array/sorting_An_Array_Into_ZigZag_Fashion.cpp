
#include <stdio.h>
#include <stdlib.h>

/* sorting an array into zig-zag form */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void zigZag(int arr[], int n);
int main()
{
	int arr[] = {1, 4, 3, 2};//{4, 3, 7, 8, 6, 2, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	zigZag(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}

	return 0;
}

void zigZag(int arr[], int n)
{

	bool flag = true;

	for (int i = 0; i <= n - 2; i++)
	{
		if (flag)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(&arr[i], &arr[i + 1]);
			}
		}
		else
		{
			if (arr[i] < arr[i + 1])
			{
				swap(&arr[i], &arr[i + 1]);
			}
		}
		flag = !flag;
	}
}

/*output : 
3	7	4	8	2	6	1	for ist 
1	4	2	3	for iind .
*/