#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.    
    vector<vector<long long int>> pascalTree(n); //2d matrix to store ans
    
    for(int i = 0; i < n; i++){
        
        //initialize 1st and 2nd position with 1
        pascalTree[i].resize(i+1);
        pascalTree[i][0] = pascalTree[i][i] = 1; 
        
        for(int j = 1; j < i; j++){
            
            //now add upper two elements to get result
            pascalTree[i][j] = pascalTree[i-1][j-1] + pascalTree[i-1][j];
            
        }
    }
    
    return pascalTree;

  
    
    
}

