#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    else
        return gcd(b, a % b);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void leftRotate(int arr[], int d, int n)
{

    for (int i = 0; i < gcd(d, n); i++)
    {
        int temp = arr[i];
        int j = i;

        while (1)
        {
            int k = j + d;
            if (k >= n)
                k = k - n;
            if (k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

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

/*  Output is: 3	4	5	6	7	1	2 */