//
// Created by chenx on 2025/9/30.
//

#include "binaryTree.h"

// >>> LeetCode_144——二叉树的前序遍历 >>>
// (25/09/29 DONE: 0 ms——100%, 10.75 MB——59.97%)
void preorder(binaryTree::TreeNode* node, vector<int>& result) {
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

// 迭代法（非递归）
// (25/10/13 DONE: 0 ms——100%, 10.71 MB——68.04%)
vector<int> preorderTraversal_iter(binaryTree::TreeNode* root) {
    vector<int> result;
    stack<binaryTree::TreeNode*> st;

    if (root == nullptr) return result;
    st.push(root);

    while(!st.empty()) {
        binaryTree::TreeNode* node = st.top();
        st.pop();
        result.push_back(node->val);

        if(node -> right) st.push(node -> right);
        if(node -> left) st.push(node -> left);
    }
    return result;
}

// <<< LeetCode_144——二叉树的前序遍历 <<<


// >>> LeetCode_94——二叉树的中序遍历 >>>
// (25/09/30 DONE: 0 ms——100%, 10.70 MB——67.69%)
void inorder(binaryTree::TreeNode* node, vector<int>& result) {
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

// 迭代法（非递归）
// (25/10/13 DONE: 0 ms——100%, 10.61 MB——88.78%)
vector<int> inorderTraversal_iter(binaryTree::TreeNode* root) {
    vector<int> result;
    stack<binaryTree::TreeNode*> st;
    binaryTree::TreeNode* cur = root;

    while(cur != nullptr || !st.empty()) {
        if (cur != nullptr) {
            st.push(cur);
            cur = cur -> left;
        }
        else {
            cur = st.top();
            st.pop();
            result.push_back(cur->val);
            cur = cur -> right;
        }
    }
    return result;
}
// <<< LeetCode_94——二叉树的中序遍历 <<<


// >>> LeetCode_145——二叉树的后序遍历 >>>
// (25/09/30 DONE: 0 ms——100%, 10.91 MB——30.94%)
void postorder(binaryTree::TreeNode* node, vector<int>& result) {
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

// 迭代法（非递归）
// (25/10/13 DONE: 0 ms——100%, 10.68 MB——89.00%)
vector<int> postorderTraversal_iter(binaryTree::TreeNode* root) {
    vector<int> result;
    stack<binaryTree::TreeNode*> st;

    if (root == nullptr) return result;
    st.push(root);

    while(!st.empty()) {
        binaryTree::TreeNode* node = st.top();
        st.pop();
        result.push_back(node->val);
        if (node->left) st.push(node->left);
        if (node->right) st.push(node->right);
    }
    reverse(result.begin(), result.end());
    return result;
}
// <<< LeetCode_145——二叉树的后序遍历 <<<


// >>> LeetCode_102——二叉树的层序遍历 >>>
// (25/10/14 DONE: 0 ms——100%, 16.66 MB——80.71%)
vector<vector<int>> binaryTree::levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    vector<int> tmp;
    queue<TreeNode*> que;

    TreeNode* node = root;
    if (node == nullptr) return result;
    que.push(node);

    while(!que.empty()) {
        int size = que.size();
        for (int i = 0; i < size; i++) {
            node = que.front();
            que.pop();

            tmp.push_back(node->val);
            if (node->left) que.push(node->left);
            if (node->right) que.push(node->right);
        }
        result.push_back(tmp);
        tmp.clear();
    }
    return result;
}
// <<< LeetCode_102——二叉树的层序遍历 <<<


// >>> LeetCode_107——二叉树的层序遍历 II >>>
// (25/10/14 DONE: 0 ms——100%, 15.70 MB——42.29%)
vector<vector<int>> binaryTree::levelOrderBottom(TreeNode* root) {
    vector<vector<int>> result;
    vector<int> tmp;
    queue<TreeNode*> que;

    if (root == nullptr) return result;
    TreeNode* node = root;
    que.push(node);

    while (!que.empty()) {
        int size = que.size();

        for (int i = 0; i < size; i++) {
            node  = que.front();
            que.pop();
            tmp.push_back(node->val);

            if (node->left) que.push(node->left);
            if (node->right) que.push(node->right);
        }
        result.push_back(tmp);
        tmp.clear();
    }
    reverse(result.begin(), result.end());
    return result;
}
// <<< LeetCode_107——二叉树的层序遍历 II <<<