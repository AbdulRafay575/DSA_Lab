#include <iostream>
using namespace std;

// Node definition
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : data(value), left(NULL), right(NULL) {}
};

void preorderTraversal(TreeNode* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}


int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

 cout << "Preorder traversal: ";
    preorderTraversal(root);
    cout << endl;


    return 0;
}

