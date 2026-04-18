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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr){return true;}
        if(p != nullptr && q == nullptr){return false;}
        if(p == nullptr && q != nullptr){return false;}
        
        vector<int> treeOne;
        vector<int> treeTwo;
        TreeNode* node;
        stack<TreeNode*> treeStack;

        treeStack.push(p);
        while(!treeStack.empty()){
            int size = treeStack.size();

                node = treeStack.top();
                treeStack.pop();
                if(node->left != nullptr){treeStack.push(node->left);}
                else{treeOne.push_back(10);}
                if(node->right != nullptr){treeStack.push(node->right);}
                else{treeOne.push_back(20);}
                treeOne.push_back(node->val);
        }

        treeStack.push(q);
        while(!treeStack.empty()){
            int size = treeStack.size();

                node = treeStack.top();
                treeStack.pop();
                if(node->left != nullptr){treeStack.push(node->left);}
                else{treeTwo.push_back(10);}
                if(node->right != nullptr){treeStack.push(node->right);}
                else{treeTwo.push_back(20);}
                treeTwo.push_back(node->val);
        }

        if(treeOne.size() != treeTwo.size()){return false;}
        for(int i = 0; i < treeOne.size(); i++){
            if(treeOne[i] != treeTwo[i]){return false;}
        }
        return true;
    }
};
