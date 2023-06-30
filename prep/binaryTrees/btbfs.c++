#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};
//Postorder
vector<int> postorder(TreeNode* root) {
    vector<int> ans;
    if(root == NULL)
        return ans;
    
    stack<TreeNode*> s1,s2;
    s1.push(root);

    while(!s1.empty()) {
        
    }
}
//Iteration preorder
vector<int> preorder(TreeNode* root) {
    vector<int> ans;
    if(root == NULL)
        return ans;
    stack<TreeNode*> s1;
    s1.push(root);

    while(!s1.empty()) {
        root = s1.top();
        s1.pop();
        ans.push_back(root->data);
        if(root->right)
            s1.push(root->right);
        if(root->left)
            s1.push(root->left);
    }
    return ans;
    
}

int main() {

}