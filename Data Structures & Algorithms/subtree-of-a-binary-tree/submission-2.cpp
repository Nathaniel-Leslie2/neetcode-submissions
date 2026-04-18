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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == nullptr){return true;}
        if(root == nullptr && subRoot != nullptr){return false;}
        
        bool res = false;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* temp = q.front(); q.pop();
            if(temp->val == subRoot->val) {res = bfs(temp, subRoot);}
            if(res) break;
            if(temp->left != nullptr) q.push(temp->left);
            if(temp->right != nullptr) q.push(temp->right);
        }
        return res;
    }
    bool bfs(TreeNode* root, TreeNode* subRoot){
        queue<TreeNode*> q1; q1.push(root);
        queue<TreeNode*> q2; q2.push(subRoot);

        while(!q1.empty()){
            TreeNode* node1 = q1.front(); q1.pop();
            TreeNode* node2 = q2.front(); q2.pop();
            if(node1->val == node2->val){
                if(node1->left != nullptr) {q1.push(node1->left);}
                if(node2->left != nullptr) {q2.push(node2->left);}

                if(node1->right != nullptr) {q1.push(node1->right);}
                if(node2->right != nullptr) {q2.push(node2->right);}
            }
            else{return false;}
            if(!q1.empty() && q2.empty()) return false;
            if(q1.empty() && !q2.empty()) return false;
        }
        return true;
    }
};
