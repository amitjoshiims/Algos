#include <stdio.h>
#include <stdlib.h>

void largestSubArrayEqual0And1(int arr[], int n);

int main()
{
    int arr[] = {1, 0, 0, 1, 0, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    largestSubArrayEqual0And1(arr, n);
    return 0;
}

// void largestSubArrayEqual0And1(int arr[], int n)
// {
//     int sum = 0;
//     int maxSize = -1, startIndex;

//     for (int i = 0; i < n - 1; i++)
//     {
//         sum = ((arr[i] == 0) ? -1 : 1);

//         for (int j = i+1; j < n; j++)
//         {
//             //sum += (arr[j] == 0) ? -1 : 1;
//             (arr[j] == 0)? (sum += -1): (sum += 1);

//             if (sum == 0 && maxSize < j-i+1){
//                 maxSize = j-i+1; 
//                 startIndex = i ;
//             }
//         }
//     }

//     if(maxSize == -1){
//         printf("No such SubArray.");
//     }else{
//         printf("startIndex: %d, maxSize: %d",startIndex,(startIndex + maxSize -1));
//     }
// } 


void largestSubArrayEqual0And1(int arr[], int n) 
{ 
    // variables to store result values 
  
    int maxsize = -1, startindex;   
   
    // Create an auxiliary array sunmleft[].  
    // sumleft[i] will be sum of array  
    // elements from arr[0] to arr[i] 
  
    int sumleft[n]; 
  
    // For min and max values in sumleft[] 
  
    int min, max;  
    int i; 
   
    // Fill sumleft array and get min and max  
    // values in it.  Consider 0 values in arr[] 
    // as -1 
  
    sumleft[0] = ((arr[0] == 0)? -1: 1); 
    min = arr[0]; max = arr[0]; 
    for (i=1; i<n; i++) 
    {       
        sumleft[i] = sumleft[i-1] + ((arr[i] == 0)?  
                     -1: 1); 
        if (sumleft[i] < min) 
            min = sumleft[i]; 
        if (sumleft[i] > max) 
            max = sumleft[i]; 
    } 
   
    int hash[max-min+1]; 
   
    for (i=0; i<max-min+1; i++) 
        hash[i] = -1; 
   
    for (i=0; i<n; i++) 
    { 
        // Case 1: when the subarray starts from  
        //         index 0 
  
        if (sumleft[i] == 0) 
        { 
           maxsize = i+1; 
           startindex = 0; 
        } 
   
        // Case 2: fill hash table value. If already 
        //         filled, then use it 
  
        if (hash[sumleft[i]-min] == -1) 
            hash[sumleft[i]-min] = i; 
        else
        { 
            if ((i - hash[sumleft[i]-min]) > maxsize) 
            { 
                maxsize = i - hash[sumleft[i]-min]; 
                startindex = hash[sumleft[i]-min] + 1; 
            } 
        } 
    } 
    if (maxsize == -1) 
        printf("No such subarray"); 
    else
        printf("%d to %d", startindex, startindex+maxsize-1); 
   
} 