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
     int height(TreeNode* root)
     {
         if(root==NULL)
         {
             return 0;
         }
         int lh=height(root->left);
         int rh=height(root->right);
         int ans =max(lh,rh)+1;

         return ans;
     }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        int lh=height(root->left);//solve 1 case
        int rh=height(root->right);
        int diff=abs(lh-rh);
        bool ans1=(diff<=1);//check that it is Balanced binary tree or not
        //recurison will handle

        bool leftAns=isBalanced(root->left);
        bool rightAns=isBalanced(root->right);
        if(ans1 && leftAns && rightAns)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};