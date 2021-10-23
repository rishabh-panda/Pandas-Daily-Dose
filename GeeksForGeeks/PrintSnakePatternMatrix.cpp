//Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        vector<int> ans;
        int i,j,n=matrix.size();
        
        for(i=0;i<n;i++){
            if(i%2==0){
                for(j=0;j<n;j++){
                    ans.push_back(matrix[i][j]);
                }
            }
            else{
                for(j=n-1;j>=0;j--){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        
        return ans;
    }
