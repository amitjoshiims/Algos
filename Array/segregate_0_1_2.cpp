#include <stdio.h>
#include <stdlib.h>

/* Program to segregate 0's & 1's in an array in O(n) time complexity */
/* Also known as : Dutch National Flag Algorithms */



//Function declaration...
void segregate0_1_2(int a[], int n);
void swapInts(int *a, int *b);

//main...
int main()
{
    int a[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);
    segregate0_1_2(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}


/* Function Definition */
void segregate0_1_2(int a[], int n)
{
    int l, h, mid;
    l = mid = 0;
    h = n - 1;

    while (mid <= h)
    {
        switch (a[mid])
        {
        case 0:
            swapInts(&a[l], &a[mid]);
            l++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swapInts(&a[mid], &a[h]);
            h--;
            break;
        default:
            break;
        }
    }
}

void swapInts(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}