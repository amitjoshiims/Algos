#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n);
void printElements(int arr[], int n);

//main...
int main()
{
    int arr[] = {9, 1, 5, 3, 2, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printElements(arr, n);
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int exchanged = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                exchanged++;
            }
        }
        if (exchanged == 0)
        {
            break;
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