//
// Created by chenx on 2025/9/30.
//

#ifndef XIN_BINARYTREE_H
#define XIN_BINARYTREE_H

#pragma once

#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

class binaryTree {
public:

    // Definition for a binary tree node.
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };

    // LeetCode_144——二叉树的前序遍历
    vector<int> preorderTraversal(TreeNode* root);
    // LeetCode_94——二叉树的中序遍历
    vector<int> inorderTraversal(TreeNode* root);
    // LeetCode_145——二叉树的后序遍历
    vector<int> postorderTraversal(TreeNode* root);

};


#endif //XIN_BINARYTREE_H