class Solution {
public:
     void postrder(TreeNode* node, vector<int>& nums) {
        if (node == nullptr) { return; }
         
        postrder(node->left, nums);
           postrder(node->right, nums);
        nums.push_back(node->val);
      
        
       
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> nums;
        
        preorder(root, nums);
        
        return nums;
    }
};
