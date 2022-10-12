bool isValidBST(TreeNode* root) {
        return check(root, LONG_MAX, LONG_MIN);
    }
    bool check(TreeNode* root, long min, long max){
        if (root == NULL) return true;
        if ((root->val < min) && (root->val > max) 
            && check(root->left, min, root->val)
            && check(root->right, root->val, max)){
            return true;
        }
        return false;
    }
