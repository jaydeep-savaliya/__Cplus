#include <bits/stdc++.h>
using namespace std;
int ans = 0;
class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int data){
            val = data;
            left = NULL;
            right = NULL;
        }
};
int height(TreeNode* root){
    if(!root) return 0;
    int hleft = height(root->left);
    int hright = height(root->right);
    ans = max(ans,1+hleft+hright);
    return 1+max(hleft,hright);
}
int diameterOfBinaryTree(TreeNode* root){
    if(root==NULL) return 0;
    height(root);
    return ans-1;
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    int ans = diameterOfBinaryTree(root);
    cout<<ans;
}