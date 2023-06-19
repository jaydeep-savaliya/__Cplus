#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val){
            data = val;
            left = NULL;
            right=NULL;
        }
};
void inorderTraversal(TreeNode* root,vector<int> &ref){
    if(root==NULL) return;
    inorderTraversal(root->left,ref);
    ref.push_back(root->data);
    inorderTraversal(root->right,ref);
}
int getMinimumDifference(TreeNode* root){
    vector<int> ref;
    inorderTraversal(root,ref);
    int ans = INT_MAX;
    for(int i=1;i<ref.size();i++){
        ans = min(ans,ref[i]-ref[i-1]);
    }
    return ans;
}
int main(){
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    int ans = getMinimumDifference(root);
    cout<<ans;
}