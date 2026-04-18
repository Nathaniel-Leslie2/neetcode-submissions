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
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){return true;} // the tree is balanced if there is an empty root
        
        int leftHeight = height(root->left); //return maximum height of left side tree
        int rightHeight = height(root->right); //get maxheight right side

        if(abs(leftHeight - rightHeight) > 1){return false;} //if the difference between the heights are greater than 1, return false
        return isBalanced(root->left) && isBalanced(root->right); // continuously calculate the height at each level until we traverse the entire tree
    }

    // recursive function call to get max height
    int height(TreeNode* root) {
        if (root == nullptr) {return 0;}
        return max(height(root->left), height(root->right)) + 1;
    }
};
