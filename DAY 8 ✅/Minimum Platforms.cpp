int findPlatform(int arr[], int dep[], int n)
    {
    
       int ans=0,count=0;
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=0,j=0;
    while(i<n&&j<n)
    {
        if(arr[i]<=dep[j])
        {
           count++;
           i++;
           
        }
        else
        {
           ans = max(count,ans);
           count--;
           j++;
        }
    }
    ans = max(count,ans);
    return ans;
    	// Your code here
    }
