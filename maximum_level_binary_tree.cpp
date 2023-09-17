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
int maxLevelSum(TreeNode* root) {
        int maxSum = INT_MIN;
        int ans = 0, level = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            level++;
            int sum = 0;
            for (int sz = q.size(); sz > 0; --sz) {
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;
                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
            if (maxSum < sum) {
                maxSum = sum;
                ans = level;
            }
        }
        return ans;
    }
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(7);
    root->right = new TreeNode(0);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(-8);
    int ans = maxLevelSum(root);
    cout<<ans;
}