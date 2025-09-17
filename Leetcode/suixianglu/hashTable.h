//
// Created by cx on 25-9-15.
//

#ifndef HASHTABLE_H
#define HASHTABLE_H

#pragma once

#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class hashTable {
public:
    // LeetCode_242——有效的字母异位词
    bool isAnagram(string s, string t);

    // LeetCode_349——两个数组的交集
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2);
	
    // LeetCode_202——快乐数
    bool isHappy(int n);

    // LeetCode_001——两数之和
    vector<int> twoSum(vector<int>& nums, int target);
};



#endif //HASHTABLE_H
