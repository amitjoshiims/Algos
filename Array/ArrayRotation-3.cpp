#include <stdio.h>
#include <stdlib.h>



void leftRotate(int arr[], int d, int n);
void reverse(int arr[], int l, int r);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; /* rotation by d elements of size n of given array */
   
    leftRotate(arr, d, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void reverse(int arr[], int l, int r){
    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++; r--;
    } 
}

void leftRotate(int arr[], int d, int n){
     reverse(arr, 0, d-1);
     reverse(arr, d, n-1);
     reverse(arr, 0, n-1);
}


/*  Output is: 3	4	5	6	7	1	2 */