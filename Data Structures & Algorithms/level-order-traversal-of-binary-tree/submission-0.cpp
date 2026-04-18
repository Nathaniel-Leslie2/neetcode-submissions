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
        vector<vector<int>> res;
        queue<TreeNode*> queue; // first in first out, add first elements to right
        queue.push(root);

        while(!queue.empty()){
            int size = queue.size();
            vector<int> level;
            TreeNode* node;
            
            for(int i = 0; i < size; i++){
                node = queue.front();
                queue.pop();
                if(node != nullptr){
                    level.push_back(node->val); 
                    queue.push(node->left);
                    queue.push(node->right);
                    }
            }
            if(!level.empty()){res.push_back(level);}
        }
        return res;
    }
};
