//
// Created by chenx on 2025/9/22.
//

#include "string_cx.h"

// >>> LeetCode_344——反转字符串 >>>
// (25/09/22 DONE: 0 ms——100%, 26.82 MB——9.54%)
void string_cx::reverseString(vector<char>& s) {
    for (int i = 0, j = s.size()-1; i < s.size()/2; i++, j--) {
        swap(s[i], s[j]);
        // >>> 数值交换 >>>
        // int tmp = s[i];
        // s[i] = s[j];
        // s[j] = tmp;
        // <<< 数值交换 <<<
        // >>> 位运算交换 >>>
        // s[i] ^= s[j];
        // s[j] ^= s[i];
        // s[i] ^= s[j];
        // <<< 位运算交换 <<<
    }
}
// <<< LeetCode_344——反转字符串 <<<


// >>> LeetCode_541——反转字符串 II >>>
string string_cx::reverseStr(string s, int k) {

}
// <<< LeetCode_541——反转字符串 II <<<


// >>> LeetCode_151——反转字符串中的单词 >>>
string string_cx::reverseWords(string s) {

}
// <<< LeetCode_151——反转字符串中的单词 <<<

