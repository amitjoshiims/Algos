#include <stdio.h>
#include <stdlib.h>


int maximumLength(int arr[], int n);
int max(int a, int b);


int main()
{
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("length of longest 0 sum subArray is : %d\n", maximumLength(arr, n));
     return 0;
}

int maximumLength(int arr[], int n)
{
    int hash[100]; /* this can be take bigger, here I know some won't exceed 100, so I have taken 100 */
    for(int i = 0 ; i<100; i++){
        hash[i] = -1;  /* initialize all indexes with -1 */
    }            

    int sum = 0, maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (arr[i] == 0 && maxLen == 0)
        {
            maxLen = 1;
        }

        if (sum == 0)
        {
            maxLen = i + 1;
        }

        if (hash[sum] == -1)
        {
            hash[sum] = i;
        }
        else
        {
            maxLen = max(maxLen, i-hash[sum]);
        }
    }
    return maxLen;
}


int max(int a, int b)
{
    return ((a > b) ? a : b);
}
