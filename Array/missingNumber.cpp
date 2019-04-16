#include <stdio.h>
#include <stdlib.h>

int missingNumber(int arr[], int n);
//main...
int main()
{
    int arr[] = {1, 2, 4 ,6, 3, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int missNum = missingNumber(arr,n);
    printf("missing number is : %d",missNum);
}

/* Ist method */
// int missingNumber(int arr[], int n){

//     int total = ((n + 1 )*(n + 2 )) / 2;

//     for(int i = 0 ; i< n ; i++){
//         total -= arr[i];
//     }
//     return total;

// }

/* IInd method */

int missingNumber(int arr[], int n){

int P1 = arr[0]; /* xor of all array elements */
int P2 = 1; /* xor of elements from 1-N */

for(int i = 1; i< n ; i++){
    P1 = P1 ^ arr[i];
}

for(int i = 2; i <= n+1 ; i++){
    P2 = P2 ^ i;
}

return P1 ^ P2;

}