// leetcode:
 void rotate(vector<vector<int>>& m) {
        //Taking transpose of the matrix
        for(int i=0;i<m.size();i++)   
            for(int j = 0 ;j<i ; j++)
              swap(m[i][j] , m[j][i]);
        
        //reversing each row of the matrix
        for(int i=0 ; i<m.size();i++)      
            reverse(m[i].begin(), m[i].end());
        
    }

//Coding Ninjas
int sr =0, er=n-1, sc=0, ec=m-1;	
        //sr -> starting row, er -> ending row, sc -> starting column, ec -> ending column
        if(er==0 or ec ==0)return ;
        while(sr<er and sc<ec) 
        {
            int temp = mat[sr][sr];
            for(int j = sc+1;j<=ec;j++){
                swap(temp,mat[sr][j]);  }
            for(int i=sr+1;i<=er;i++){
                swap(temp,mat[i][ec]);
            }
            for(int j= ec-1;j>=sc;j--){
                swap(temp,mat[er][j]);
            }
            for(int i = er-1;i>=sr;i--){
                swap(temp,mat[i][sc]);
            }
            sr++; er--; sc++; ec--;
        }
