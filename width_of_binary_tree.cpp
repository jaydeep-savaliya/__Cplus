#include <bits/stdc++.h>
using namespace std;
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
int widthOfBinaryTree(TreeNode* root){
    if(!root) return 0;
    queue<pair<TreeNode*,int>> q;
    q.push({root,0});
    int ans = 0;
    while(!q.empty()){
        int sz = q.size();
        int mmin = q.front().second;
        int first,last;
        for(int i=0;i<sz;i++){
            int curr_node = q.front().second - mmin;
            TreeNode* curr = q.front().first;
            q.pop();
            if(i==0) first = curr_node;
            if(i==sz-1) last = curr_node;
            if(curr->left) q.push({curr->left,curr_node*2+1});
            if(curr->right) q.push({curr->right,curr_node*2+2});
        }
        ans = max(ans,last-first+1);
    }
    return ans;
}
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(9);
    int ans = widthOfBinaryTree(root);
    cout<<ans;
}