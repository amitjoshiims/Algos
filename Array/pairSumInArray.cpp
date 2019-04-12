#include <stdio.h>
#include <stdlib.h>

#define MAX  9999 /* Just to avoid space I have given 9999 value to MAX */

void printPairs(int arr[], int n, int sum);
//main...
int main()
{
    int arr[] = {3, 5, 10, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 13;
    printPairs(arr, n, sum);
}

void printPairs(int arr[], int n, int sum)
{
    int map[MAX] = { 0 };

    for (int i = 0; i < n; i++)
    {
        int temp = sum - arr[i];
        if (temp >= 0 && map[temp] == 1)
        {
            printf("Pair with sum %d is : %d and %d", sum, arr[i], temp);
        }
        map[arr[i]] = 1;
    }
}