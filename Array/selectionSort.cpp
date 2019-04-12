#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n);
void printElements(int arr[], int n);

//main...
int main()
{
    int arr[] = {9, 1, 5, 3, 2, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printElements(arr, n);
}

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }

        if (i != min)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

void printElements(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}