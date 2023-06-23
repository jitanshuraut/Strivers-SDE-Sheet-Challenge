vector<int> RightView(Node *node)
{
    if(!node)return {};
    vector<int>v;
    queue<Node*>q;
    q.push(node);
    while(!q.empty())
    {
        vector<int>temp;
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            Node* x=q.front();
            q.pop();
            
            if(x->left)q.push(x->left);
            if(x->right)q.push(x->right);
            temp.push_back(x->data);
        }
        v.push_back(temp[0]);
    }
    return v;
}

