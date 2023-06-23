class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        stack<string>st;
        for(int i = 0; i <= s.length(); i++){
            if(i == s.length() || s[i] == ' '){
                if(temp.length()){
                    st.push(temp);
                }
                temp = "";
            }else{
                temp += s[i];
            }
        }
        s = "";
        while(!st.empty()){
            s += st.top() + ' ';
            st.pop();
        }
        if(s.back() == ' ') s.pop_back();
        return s;
    }
};



