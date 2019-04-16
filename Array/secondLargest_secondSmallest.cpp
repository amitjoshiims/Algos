#include <stdio.h>
#include <stdlib.h>

void secondLargest(int arr[], int n);
void secondSmallest(int arr[], int n);
//main...
int main()
{
    int arr[] = {8, 9, 1, 6, 16, 12, 98};
    int n = sizeof(arr) / sizeof(arr[0]);
    secondLargest(arr, n);
    secondSmallest(arr, n);

}

void secondLargest(int arr[], int n)
{

    if (n < 2){
        printf("Input invalid...");
        return ;
    }

    int first, second;
    first = second = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] != first && arr[i] > second)
        {
            second = arr[i];
        }
    }
        printf("second largest is : %d\n", second);
}

void secondSmallest(int arr[], int n)
{

    if (n < 2){
        printf("Input invalid...");
        return ;
    }

    int first, second;
    first = second = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] != first && arr[i] < second)
        {
            second = arr[i];
        }
    }
        printf("second smallest is : %d", second);
}
