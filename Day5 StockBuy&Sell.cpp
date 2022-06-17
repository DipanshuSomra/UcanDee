#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
    // Write your code here.
  int maxPro = 0;
  int minPrice = arr[0];
  for (int i = 0; i < arr.size(); i++) {
    minPrice = min(minPrice, arr[i]);
    maxPro = max(maxPro, arr[i] - minPrice);
  }
  return maxPro;
}
