class Solution {
public:
    int ans = 0;

    int fun(TreeNode* root) {
        if (!root) return 0;  

        int left = fun(root->left);    
        int right = fun(root->right);  

        ans = max(ans, left + right);  

        return 1 + max(left, right);   
    }

    int diameterOfBinaryTree(TreeNode* root) {
        fun(root);       
        return ans;       
    }
};
