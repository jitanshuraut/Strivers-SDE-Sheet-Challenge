class Solution {
public:
    void preorder(TreeNode* node, vector<int>& nums) {
        if (node == nullptr) { return; }
        
        nums.push_back(node->val);
        preorder(node->left, nums);
        preorder(node->right, nums);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nums;
        
        preorder(root, nums);
        
        return nums;
    }
};


