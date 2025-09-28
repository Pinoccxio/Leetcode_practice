//
// Created by chenx on 2025/9/22.
//

#ifndef XIN_STRING_CX_H
#define XIN_STRING_CX_H

#pragma once

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class string_cx {
public:
    // LeetCode_344——反转字符串
    void reverseString(vector<char>& s);

    // LeetCode_541——反转字符串 II
    string reverseStr(string s, int k);

    // KamaCoder_54——替换字符串数字
    string replaceNumber(string s);

    // LeetCode_151——反转字符串中的单词
    string reverseWords(string s);

    // KamaCoder_55——右旋字符串
    string rightSpinString(string& s);

    // LeetCode_028——找出字符串中第一个匹配项的下标
    int strStr(string haystack, string needle);

    // LeetCode_459——重复的子字符串
    bool repeatedSubstringPattern(string s);
};


#endif //XIN_STRING_CX_H