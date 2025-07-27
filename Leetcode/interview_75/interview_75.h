//
// Created by chenx on 2025/4/30.
//

#ifndef INTERVIEW_75_H
#define INTERVIEW_75_H

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


class Interview_75 {
    public:
        // LeetCode_1768——交替合并字符串
        string mergeAlternately(string word1, string word2);

        // LeetCode_1071——字符串的最大公因子
        string gcdOfStrings(string str1, string str2);

        // LeetCode_1431——拥有最多糖果的孩子
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies);

        // LeetCode_0605——种花问题
        bool canPlaceFlowers(vector<int>& flowerbed, int n);

        // LeetCode_0345——反转字符串中的元音字母
        string reverseVowels(string s);
};



#endif //INTERVIEW_75_H
