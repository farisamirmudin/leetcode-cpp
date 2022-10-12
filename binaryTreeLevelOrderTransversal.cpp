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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};
        TreeNode* p;
        vector<vector<int>> ans;
        queue<TreeNode*> Q;
        Q.push(root);
        vector<int> lvl;
        while(!Q.empty()){
            int len = Q.size();
            for(int i=0;i<len;i++){
                p = Q.front();
                if(p->left) Q.push(p->left);
                if(p->right) Q.push(p->right);
                lvl.push_back(p->val);
                Q.pop();
            }
            ans.push_back(lvl);
            lvl.clear();
        }
        return ans;
    }
};
