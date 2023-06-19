class MyStack {
public:
queue<int>q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
        
    }
    
    int top() {
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q1.pop();
        q2.push(ans);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
        
    }
    
    bool empty() {
        if(q1.size()==0)
        return 1;

        return 0;
    }
};














