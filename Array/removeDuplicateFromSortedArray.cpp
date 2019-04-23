#include <stdio.h>
#include <stdlib.h>

/* remove duplicates from sorted array */
void removeDuplicate(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicate(arr, n);
    return 0;
}

void removeDuplicate(int arr[], int n)
{

    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j] = arr[n-1];
    printf("length of array after removing duplicates: %d\n",j+1);

    /* print elements */   
    for (i = 0; i < j+1; i++)
    {
        /* code */
        printf("%d\t",arr[i]);
    }
    

}

/* Output is => 
length of array after removing duplicates: 4
1	2	3	4	
*/