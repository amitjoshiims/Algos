#include <stdio.h>
#include <stdlib.h>

void leftRotate(int arr[], int n, int d);
void rotateOneByOne(int arr[], int n);

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3 ; /* rotation by d elements of size n of given array */
    leftRotate(arr,n,d);

    for(int i = 0 ;i<n; i++){
        printf("%d\t",arr[i]);
    }

}

void leftRotate(int arr[], int n, int d){

    for(int i = 0 ; i< d; i++){
        rotateOneByOne(arr,n);
    }

}

void rotateOneByOne(int arr[], int n){
    int k = arr[0] , i;

    for( i = 0; i< n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[i] = k ;
}
