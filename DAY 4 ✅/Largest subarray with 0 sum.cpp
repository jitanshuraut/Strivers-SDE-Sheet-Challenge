int maxLen(vector<int>&a, int n)
    {   
        // Your code here
       unordered_map<int, int> mp;
       mp[0] = -1;
       int mx = 0, sum = 0;
       for(int i=0; i<n;i++)
       {
           sum += a[i];
           if(mp.find(sum) != mp.end())
           mx = max(mx, i-mp[sum]);
           else
           mp[sum] = i;
       }
       return mx
