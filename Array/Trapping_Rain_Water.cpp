#include <stdio.h>
#include <stdlib.h>

//Trapping Rain Water

int main()
{
    int arr[] = {3, 0, 0, 2, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0, high = n - 1; /* indices for traversing array */
    int left_max = 0, right_max = 0;
    int result = 0; /* output */

    while (low <= high)
    {
        if (arr[low] < arr[high])
        {

            if (arr[low] > left_max)
            {
                left_max = arr[low];
            }
            else
            {
                result += left_max - arr[low];
            }
            low++;
        }
        else
        {
            if (arr[high] > right_max)
            {
                right_max = arr[high];
            }
            else
            {
                result += right_max - arr[high];
            }
            high--;
        }
    }
    printf("Total unit of water : %d", result);
}

/*
 {3, 0, 0, 2, 0, 4} for this we can trap 10 unit of water!

     |
|    |
|  | |
|__|_|
*/