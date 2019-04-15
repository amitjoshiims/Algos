#include <stdio.h>
#include <stdlib.h>

void reverseArrayInGroups(int arr[], int n, int k);
void printArray(int arr[], int n);
//main...
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; /* here k is no of elemtns to be grouped at one shot */
    reverseArrayInGroups(arr, n, k);
    printArray(arr, n);
}

void reverseArrayInGroups(int arr[], int n, int k)
{

    for (int i = 0; i < n; i += k)
    {
        int left = i;

        int right = (i + k - 1 < n - 1) ? i + k - 1 : n - 1;

        while (left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}