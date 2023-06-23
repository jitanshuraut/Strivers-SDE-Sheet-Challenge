vector<int> leftView(Node *node)
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
            temp.push_back(x->data);
            if(x->left)q.push(x->left);
            if(x->right)q.push(x->right);
        }
        v.push_back(temp[0]);
    }
    return v;
}

