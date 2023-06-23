class Solution {
public:
    
     
   int myAtoi(string s) {
        int n = s.length();
        int i=0;
        
		//Removing Whitespaces
        while(s[i] == ' ' && i<n){
            i++;
        }
        if(i==n) return 0;
        
		//Storing Positive OR Negative
        int flag = 1;
        if(s[i] == '-'){
            flag = -1;
            i++;
        }
        else if(s[i] == '+'){
            flag = 1;
            i++;
        }
        
		//Handling Leading Zeroes
        while(s[i] == '0' && i<n){
            i++;
        }
        if(i == n) return 0;
        
		//Converting rest string to INT
        long long ans=0;
        while(s[i]>='0' && s[i]<='9' && i<n){
            int temp = s[i]-'0';
            ans = ans*10 + temp;
            if(ans > INT_MAX){
                break;
            }
            i++;
        }
        ans = flag * ans;
		
		//Stamping ans exactly to integer range.
        if(ans>INT_MAX)  return INT_MAX;
        else if(ans<INT_MIN) return INT_MIN;
        
		return ans;   
    }
};














