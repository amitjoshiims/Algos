#include <stdio.h>
#include <stdlib.h>


/* Program to segregate 0's & 1's in an array in O(n) time complexity */


void segregate(int a[], int n);
int main()
{

   int a[] = {0,1,1,0,0,0,1,1,0};
   int n = sizeof(a)/sizeof(a[0]);

   segregate(a, n);

   for(int i = 0 ; i < n ; i++){
       printf("%d\t",a[i]);
   }


}

void segregate(int a[], int n){

 int left = 0 ; int right = n-1;

 while(left < right){

     while(a[left] == 0 && left < right){
         left++;
     }
     while(a[right] == 1 && left < right){
         right--;
     }


     if (left < right){
         int temp = a[left];
         a[left] = a[right];
         a[right] = temp;
         left++;
         right--;
     }

 
 }
 






}