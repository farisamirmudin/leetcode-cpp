/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int preorderIndex;
    map<int, int> inorderIndexMap;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        preorderIndex = 0;
        for (int i = 0;i<inorder.size();i++){
            inorderIndexMap.insert({inorder[i], i});
        }
        return arrayToTree(preorder, 0, preorder.size()-1);
    }
    TreeNode* arrayToTree(vector<int>& preorder, int left, int right){
        if (left>right) return NULL;
        int val = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(val);
        root->left = arrayToTree(preorder, left, inorderIndexMap.at(val) - 1);
        root->right = arrayToTree(preorder, inorderIndexMap.at(val) + 1, right);
        
        return root;
    }
};
