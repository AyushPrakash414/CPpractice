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
int height(TreeNode* root){
    if (root==nullptr){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if (root==nullptr){
            return 0;
        }
        int choice1=diameterOfBinaryTree(root->left);
        int choice2=diameterOfBinaryTree(root->right);
        int choice3=height(root->left)+height(root->right);
        return max(choice1,max(choice2,choice3));
    }
};
