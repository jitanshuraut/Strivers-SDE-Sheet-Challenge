class Solution{
    public:
    void dfs(int row,int col,vector<vector<int>>&m,int &n,map<pair<int,int>,int>&vis,string &temp,vector<string> &res){
        if(row==n-1&&col==n-1&&m[row][col]==1){
            res.push_back(temp);
            temp="";
            return;
        }
        if(row<0||row>=n||col<0||col>=n||m[row][col]==0||vis[{row,col}]){
            temp="";
            return;
        }
        vis[{row,col}]=1;
        vector<pair<int,int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
        for(auto ele:dir){
            int new_row=row+ele.first,new_col=col+ele.second;
            string new_temp=temp;
            if(ele.first==-1){
                new_temp+='U';
            }
            if(ele.first==1){
                new_temp+='D';
            }
            if(ele.second==-1){
                new_temp+='L';
            }
            if(ele.second==1){
                new_temp+='R';
            }
            dfs(new_row,new_col,m,n,vis,new_temp,res);
        }
        vis[{row,col}]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>res;
        string temp="";
        map<pair<int,int>,int>vis;
        dfs(0,0,m,n,vis,temp,res);
        return res;
    }
};

