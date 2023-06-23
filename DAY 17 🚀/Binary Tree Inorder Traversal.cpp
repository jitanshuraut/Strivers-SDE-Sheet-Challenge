class Solution {
public:
    void preorder(TreeNode* node, vector<int>& nums) {
        if (node == nullptr) { return; }
          preorder(node->left, nums);
        nums.push_back(node->val);
        preorder(node->right, nums);
      
       
    }
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int> nums;
        
        preorder(root, nums);
        
        return nums;
    }
};





