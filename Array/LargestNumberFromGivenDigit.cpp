#include <stdio.h>
#include <stdlib.h>

/* largest number that can be formed with the given digits */
/* The digits in the array are in between 0 and 9 */

void findLargestNumberFormed(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLargestNumberFormed(arr, n);
    return 0 ;
}

void findLargestNumberFormed(int arr[], int n)
{
    int hash[10] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < hash[i]; j++)
        {
            printf("%d", i);
        }
    }
}


