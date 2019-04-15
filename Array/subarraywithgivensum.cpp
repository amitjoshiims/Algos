#include <stdio.h>
#include <stdlib.h>

int subArraySum(int arr[], int n, int sum);
//main...
int main()
{
    int arr[] = {15, 2, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    if (subArraySum(arr, n, sum) == 1)
    {
        printf("\nTRUE");
    }
    else
    {
        printf("\nFALSE");
    }
}

int subArraySum(int arr[], int n, int sum)
{
    int current_Sum = arr[0], start = 0, i;

    for (i = 1; i <= n; i++)
    {
        // printf("i= %d, current_Sum= %d\n",i, curr_sum);
        while (current_Sum > sum && start < i - 1)
        {
            current_Sum = current_Sum - arr[start];
            start++;
        }
        if (current_Sum == sum)
        {
            printf("\nSum found between indexes %d and %d", start, i - 1);
            return 1;
        }
        if (i < n)
            current_Sum = current_Sum + arr[i];
    }
    return -1;
}

// int subArraySum(int arr[], int n, int sum){

//      int end = 0, temp_Sum = 0;

//      for(int i = 0 ; i< n ; i++){

//          end = i;temp_Sum = 0;

//      while(sum > temp_Sum && i < n){
//          temp_Sum += arr[end];
//          end++;
//      }

//      if (sum == temp_Sum){
//          printf("\nstarting index: %d , end index: %d",i,(end-1));
//          return 1;
//      }

//      }
//      return -1;
// }
