   void subset(vector<vector<int>>&ans,vector<int>&a,vector<int>&cont,int idx){
        ans.push_back(cont);
    for(int i=idx;i<a.size();i++){
        if(i!=idx&&a[i]==a[i-1])continue;
        cont.push_back(a[i]);
        subset(ans,a,cont,i+1);
        cont.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>ds;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        subset(v,nums,ds,0);
        return v; 
        }
    };
