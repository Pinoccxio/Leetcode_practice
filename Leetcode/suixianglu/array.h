//
// Created by chenx on 2025/5/12.
//

#ifndef ARRAY_H
#define ARRAY_H

#pragma once

#include <vector>
#include <algorithm>

using namespace std;

class Array {
public:
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

};



#endif //ARRAY_H
