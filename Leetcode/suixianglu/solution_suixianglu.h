//
// Created by chenx on 2025/5/12.
//

#ifndef SOLUTION_SUIXIANGLU_H
#define SOLUTION_SUIXIANGLU_H

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution_suixianglu {
    public:
    // ===================== 数组 =====================
        // LeetCode_704——二分查找
        int search(vector<int>& nums, int target);

        // LeetCode_27——移除元素
        int removeElement(vector<int>& nums, int val);

        // LeetCode_977——有序数组的平方
        vector<int> sortedSquares(vector<int>& nums);

        // LeetCode_209——长度最小的子数组
        int minSubArrayLen(int target, vector<int>& nums);

        // LeetCode_59——螺旋矩阵II
        vector<vector<int>> generateMatrix(int n);
    // ===================== 数组 =====================

    // ===================== 链表 =====================
        // LeetCode_203——移除链表元素
        ListNode* removeElements(ListNode* head, int val);




    // ===================== 链表 =====================
};



#endif //SOLUTION_SUIXIANGLU_H
