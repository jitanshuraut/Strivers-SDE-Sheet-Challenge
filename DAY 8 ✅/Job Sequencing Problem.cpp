 static bool comp(Job &a ,Job &b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comp);
        int profit=0,c=0;
        vector<int> vect;
        vector<bool> vis(n ,false);
        for(int i=0;i<n;i++){
         
            int d=arr[i].dead;
            for(int j=min(n,d)-1;j>=0;j--){
                if(vis[j]==false)
                {
                    vis[j]=true;
                    profit+=arr[i].profit;
                    c++;
                  
                    break;
                }
            }
        }
        vect.push_back(c);
        vect.push_back(profit);
        return vect;
        
    } 

