#include <stdio.h>
#include <stdlib.h>

/* Program to segregate 0's & 1's in an array in O(n) time complexity */
/* Also known as : Dutch National Flag Algorithms */

//Function declaration...
void segregateEvenOdd(int a[], int n);
void swapInts(int *a, int *b);

//main...
int main()
{
    int a[] = {3, 2, 9, 4, 2, 8, 8};
    int n = sizeof(a) / sizeof(a[0]);
    segregateEvenOdd(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}

/* Function Definition */
void segregateEvenOdd(int a[], int n)
{
    int left, right;
    left = 0;
    right = n - 1;

    while (left < right)
    {

        while (a[left] % 2 == 0 && left < right)
        {
            left++;
        }
        while (a[right] % 2 != 0 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            left++;
            right--;
        }
    }
}

void swapInts(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}