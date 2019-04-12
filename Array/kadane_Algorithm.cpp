#include <stdio.h>
#include <stdlib.h>

//main...
int main()
{
    int arr[] = {-8, -1, 4, -1, -3, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_EndsHere, max_SoFar, s, e, p;
    max_EndsHere = max_SoFar = 0;

    for (int i = 0; i < n; i++)
    {
        max_EndsHere = max_EndsHere + arr[i];
        if (max_EndsHere < 0)
        {
            max_EndsHere = 0;
            p = i + 1;
        }

        if (max_EndsHere > max_SoFar)
        {
            max_SoFar = max_EndsHere;
            s = p;
            e = i;
        }
    }

    printf("Largest sum contiguous subarray: %d\n starting Index: %d \n ending Index: %d", max_SoFar, s, e);
}
