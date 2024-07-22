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
    TreeNode*solve(vector<int>preorder,vector<int>inoder,int start,int end,int&idx){
        if(start>end){
            return nullptr;
        }
        int rootVal=preorder[idx];
        int i=start;
        for (;i<=end;i++){
            if(inoder[i]==rootVal){
                break;
            }
        }
        idx++;
        TreeNode*root=new TreeNode(rootVal);
        root->left=solve(preorder,inoder,start,i-1,idx);
        root->right=solve(preorder,inoder,i+1,end,idx);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int idx=0;
        int i=inorder.size();
        return solve(preorder,inorder,0,i-1,idx);
    }
};
