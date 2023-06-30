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

TreeNode* buildTree(TreeNode* r) {
    int d;
    std::cin>>d;
    if(d == -1) {
        return NULL;
    }

    TreeNode* root = new TreeNode(d);
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);

    return root;

}

//Recursion Preorder
void preorder(TreeNode* root, vector<int>& ans) {
    if(root == NULL)
        return;

    ans.push_back(root->data);
    preorder(root->left, ans);
    preorder(root->right, ans);

    return;
}
//Recursion Postorder
void postorder(TreeNode* root, vector<int>& ans) {
    if(root == NULL)
        return;
    
    postorder(root->left, ans);
    postorder(root->right, ans);

    ans.push_back(root->data);

    return;
}
//Recursion 
void inorder(TreeNode* root, vector<int>& ans) {
    if(root == NULL)
        return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);

    return;
}
int main() {

}