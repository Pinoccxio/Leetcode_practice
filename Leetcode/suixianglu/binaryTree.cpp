//
// Created by chenx on 2025/9/30.
//

#include "binaryTree.h"

// >>> LeetCode_144——二叉树的前序遍历 >>>
// (25/09/29 DONE: 0 ms——100%, 10.75 MB——59.97%)
void preorder(TreeNode* node, vector<int>& result) {
    if (node == nullptr) return;
    result.push_back(node -> val);
    preorder(node -> left, result);
    preorder(node -> right, result);
}

vector<int> binaryTree::preorderTraversal(TreeNode* root) {
    vector<int> result;
    preorder(root, result);
    return result;
}
// <<< LeetCode_144——二叉树的前序遍历 <<<


// >>> LeetCode_94——二叉树的中序遍历 >>>
// (25/09/30 DONE: 0 ms——100%, 10.70 MB——67.69%)
void inorder(TreeNode* node, vector<int>& result) {
    if (node == nullptr) return;
    inorder(node -> left, result);
    result.push_back(node -> val);
    inorder(node -> right, result);
}

vector<int> binaryTree::inorderTraversal(TreeNode* root) {
    vector<int> result;
    inorder(root, result);
    return result;
}
// <<< LeetCode_94——二叉树的中序遍历 <<<


// >>> LeetCode_145——二叉树的后序遍历 >>>
// (25/09/30 DONE: 0 ms——100%, 10.91 MB——30.94%)
void postorder(TreeNode* node, vector<int>& result) {
    if (node == nullptr) return;
    postorder(node -> left, result);
    postorder(node -> right, result);
    result.push_back(node -> val);
}

vector<int> binaryTree::postorderTraversal(TreeNode* root) {
    vector<int> result;
    postorder(root, result);
    return result;
}
// <<< LeetCode_145——二叉树的后序遍历 <<<