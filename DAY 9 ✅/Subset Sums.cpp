//power set        
        vector<int> res;
        for(int i=0; i<(1<<N); i++) {
            int sum=0;
            for(int j=0; j<N; j++) {
                if(i&(1<<j)) sum+=arr[j];
            }
            res.push_back(sum);
        }
        return res;



// Code: best one 
class Solution
{
public:
   void f(int i, vector<int>arr,int sum, vector<int>& ans){
	if(i >= (int)arr.size()){
		ans.push_back(sum);
		sum = 0;
		return;
	}
	sum += arr[i];
	f(i+1, arr, sum, ans);
	sum -= arr[i];
	f(i+1, arr, sum, ans);
}

    vector<int> subsetSums(vector<int> v, int N)
    {
    
    vector<int> ans;
	f(0, v, 0, ans);
	sort(ans.begin(), ans.end());
	
	return ans;
    }
};
