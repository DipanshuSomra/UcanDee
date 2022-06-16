/*For example, given integer N= 4 then you have to print.
1  
1 1 
1 2 1 
1 3 3 1

Here for the third row, you will see that the second element is the summation
of the above two-row elements i.e. 2=1+1, and similarly for row three 3 = 1+2 and 3 = 1+2.*/

#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.    
    vector<vector<long long int>> pascalTree(n); //2d matrix to store ans
    
    for(int i = 0; i < n; i++){
        
        pascalTree[i].resize(i+1); // change the size of column to i+1 so that it will become a tree
        pascalTree[i][0] = pascalTree[i][i] = 1; //initialize 1st and 2nd position with 1
        
        for(int j = 1; j < i; j++){
            
            //now add upper two elements to get result
            pascalTree[i][j] = pascalTree[i-1][j-1] + pascalTree[i-1][j];
            
        }
    }
    
    return pascalTree;

  
    
    
}

