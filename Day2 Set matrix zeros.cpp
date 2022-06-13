#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// 1. store size of rows and cols
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    //2. taking variable to store the original value of matrix[0][0]
    int col0 = 1;
    
    for(int i = 0; i < rows; i++){
        
        //3. marking col0 as 0 to make all the value 0 of respective col
        if(matrix[i][0] == 0)
            col0 = 0;
        
        for(int j = 1; j < cols; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    
 //4. now traverse from end of matrix and mark 0 if its row0 or col0 marked to 0
    
     for(int i = rows - 1; i >= 0; i--){
        
        for(int j = cols - 1; j >= 1; j--){
           
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
            
        }
          if (col0 == 0) 
               matrix[i][0] = 0;
    }
    
}
