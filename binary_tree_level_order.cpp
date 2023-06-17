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
            right=NULL;
        }
};
vector<vector<int>> levelOrder(TreeNode* root){
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(root);
    if(!root) return {};
    while(!q.empty()){
        vector<int> ref;
        int size = q.size();
        while(size--){
            TreeNode* curr = q.front();
            q.pop();
            ref.push_back(curr->data);
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        ans.push_back(ref);
    }
    return ans;
}
int main(){
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<vector<int>> ans = levelOrder(root);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

}