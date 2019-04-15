#include <stdio.h>
#include <stdlib.h>

int equlibriumPoint(int arr[], int n);
//main...
int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int p = equlibriumPoint(arr, n);
   if (p == -1){
       printf("Not found....");

   }else {
       printf("index is : %d",p);
   }

}

int equlibriumPoint(int arr[], int n){
    int sum= 0 ;
    int l_Sum = 0 ; 

    for(int i = 0 ; i<n ; i++){
        sum += arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        sum = sum - arr[i];
        if (sum == l_Sum){
            return i ;
        }
        l_Sum = l_Sum + arr[i];
    }
    return -1;
    
}
