class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> mp;
   // Count the frequency of element
    for(int i = 0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    vector<int> ans;
    // Max Heap with pair
    priority_queue<pair<int,int>> pq;
    //  Insert element is priority queue 
    for(auto it : mp){
    // Pushing in the form of  frequency first and element second
        pq.push({it.second,it.first});
    }
    while(k--){
        // Pushing element in ans while k = 0
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
    }
};

