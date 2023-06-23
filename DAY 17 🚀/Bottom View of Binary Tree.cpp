vector <int> bottomView(Node *root) {
       
 //The logic is simple we are taking the root at 0th level and towards root's left we are decreasing the 
//  level by 1 ,  and towards right we are increasing by 1 
 
       vector<int>ans;
       if(root == NULL) return ans;
      
       map<int,int>mp;
       queue<pair<Node * , int>>q;
       q.push({root , 0});
       
       while(!q.empty()) {
           auto it = q.front() ;
           q.pop();
           
           Node*node = it.first;
           int line = it.second;
 
           mp[line] = node->data;
           
           if(node->left != NULL) {
               q.push({node->left , line-1});
           }
           if(node->right != NULL) {
               q.push({node->right , line+1});
           }
       }
       for(auto i : mp) {
           ans.push_back(i.second);
       }
       return ans;
    }




