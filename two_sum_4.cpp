#include <bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};
void inorederTraversal(TreeNode* root,vector<int> &nums){
    if(root==NULL) return;
    inorederTraversal(root->left,nums);
    nums.push_back(root->data);
    inorederTraversal(root->right,nums);
}
bool findTarget(TreeNode* root,int k){
    vector<int> nums;
    inorederTraversal(root,nums);
    map<int,int> m;
    for(int i=0;i<nums.size();i++){
        if(m.find(k-nums[i])!=m.end()) return true;
        else{
            m.insert({nums[i],i});
        }
    }
    return false;
}
int main(){
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right=new TreeNode(6);
    root->right->right = new TreeNode(7);
    int k = 9;
    bool ans = findTarget(root,k);
    cout<<ans;
}