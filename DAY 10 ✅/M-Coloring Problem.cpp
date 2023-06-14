class Solution{
public:
    bool solve(vector<int> adj[], int s, int m, int n, vector<int> &color){
        if(s==n){
            return true;
        }
        
        for(int i=1; i<=m; i++){
            if(isPossible(adj, s, n, i, color)){
                color[s]=i;
                if(solve(adj, s+1, m, n, color)==true){
                    return true;
                }
                color[s]=0;
            }
        }
        return false;
    }
            
        
    
    bool isPossible(vector<int> adj[], int s, int n, int c, vector<int> &color){
        for(int v: adj[s]){
            if(color[v]==c){
                return false;
            }
        }
        return true;
    }
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int> adj[n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(graph[i][j]==1){
                    adj[i].push_back(j);                        
                }
            }
        }
        vector<int> color(n,0);
        return solve(adj, 0, m, n, color);
    }
};







