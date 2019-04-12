#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n);
void printElements(int arr[], int n);

//main...
int main()
{
    int arr[] = {9, 1, 5, 3, 2, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printElements(arr, n);
}

void insertionSort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int k = arr[i]; /*to be inserted at proper place*/
        for (j = i - 1; j >= 0 && k < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = k;
    }
}

void printElements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}