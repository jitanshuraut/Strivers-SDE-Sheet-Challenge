for(int i=0;i<n;i++){
 for(int j=i;j<n;j++){
   if(map.find(a[j])==map.end()){
     Ctn++;
   }
    else{
    Map.clear;
    Max_=max(ctn,max_);
    }
   } 
}

int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l=0, r = n-1;
        
        unordered_set<char> visited;
        
        int maxStr = 0;

        for(int r=0;r<n;r++)
        {
            if(visited.find(s[r])==visited.end())
            {
                visited.insert(s[r]);
                maxStr = max(maxStr,r-l+1);
                
            }
            else
            {
                while(l!=r && s[l]!=s[r])
                    visited.erase(s[l++]);
                
                //Removing and adding the same element
                visited.erase(s[l++]);
                visited.insert(s[r]);
                
                maxStr = max(maxStr,r-l+1);
            }
        }
        
        return maxStr;
    }

