#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    
   long long max_sum=0;
   long long curr_sum=0;
    
   for(int i=0;i<n;i++){
       
       curr_sum=curr_sum+arr[i];
       
       if(curr_sum>max_sum){
           max_sum=curr_sum;
       }
       
       if(curr_sum<0){      // if curr sum is less than 0 therefore it will not contribute in max sum as it will only decrease it by some extent so we assign it to 0 
           curr_sum=0;
       }
   }
   return max_sum;
}
