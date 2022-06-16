#include<bits/stc++.h>
void sort012(int *arr, int n)
{
   //   Write your code here
   int low = 0;  // for storing 0's
   int mid = 0;  // for storing 1's
   int high = n-1;  // for storing 2's

   while(mid <=high){
       if(arr[mid] == 0){
           swap(arr[low],arr[mid]);  // if find 0 at swap low and mid and increment both
           low++;
           mid++;
       }
       else if(arr[mid] == 1){  // if find 1 increment mid
           mid++;
       }
       else if(arr[mid] == 2){   // if find 2 at swap high and mid and decrement high
           swap(arr[mid], arr[high]);
           high--;
       }
   }
    
    
}
