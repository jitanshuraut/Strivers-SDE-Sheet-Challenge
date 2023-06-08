 int longestConsecutive(vector<int>& arr) {
        int n = arr.size(); 
        if(n == 0) return 0;        
        sort(arr.begin(), arr.end()); 
        int mxLen = 0, currLen = 1; 
        for(int i = 1; i < n; i++) // traverse from the array
        {
            if(arr[i] == arr[i - 1] + 1)            {
                currLen++; // increase the curr Length by 1
            }
            else if(arr[i] != arr[i - 1]) // but if it is not equal
            {
                mxLen = max(mxLen, currLen); // update our mxLen 
                currLen = 1; // and reset the currLen with 1
            }
        }
        
        mxLen = max(mxLen, currLen); 
        return mxLen; 
