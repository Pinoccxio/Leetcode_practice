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
// (25/09/22 DONE: 0 ms——100%, 9.21 MB——99.51%)
string string_cx::reverseStr(string s, int k) {
    for (int i = 0; i < s.size(); i += 2*k) {
        if (s.size() - i < k) {
            reverse(s.begin()+i, s.end());
        }
        else {
            reverse(s.begin()+i, s.begin()+i+k);
        }
    }
    return s;
}
// <<< LeetCode_541——反转字符串 II <<<


// >>> KamaCoder_54——替换字符串数字 >>>
// (25/09/22 DONE: 30 ms, 2180 kB)
string string_cx::replaceNumber(string s) {
    string result;
    for (char i : s) {
        if (i <= '9' && i >='0') {
            result.append("number");
            continue;
        }
        result.push_back(i);
    }
    return result;
}
// <<< KamaCoder_54——替换字符串数字 <<<


// >>> LeetCode_151——反转字符串中的单词 >>>
// (25/09/22 UNDONE!!!)
void reverse(string& s, int start, int end){ //翻转，区间写法：左闭右闭 []
    for (int i = start, j = end; i < j; i++, j--) {
        swap(s[i], s[j]);
    }
}

void removeExtraSpaces(string& s) {//去除所有空格并在相邻单词之间添加空格, 快慢指针。
    int slow = 0;   //整体思想参考https://programmercarl.com/0027.移除元素.html
    for (int i = 0; i < s.size(); ++i) { //
        if (s[i] != ' ') { //遇到非空格就处理，即删除所有空格。
            if (slow != 0) s[slow++] = ' '; //手动控制空格，给单词之间添加空格。slow != 0说明不是第一个单词，需要在单词前添加空格。
            while (i < s.size() && s[i] != ' ') { //补上该单词，遇到空格说明单词结束。
                s[slow++] = s[i++];
            }
        }
    }
    s.resize(slow); //slow的大小即为去除多余空格后的大小。
}

string string_cx::reverseWords(string s) {
    removeExtraSpaces(s); //去除多余空格，保证单词之间之只有一个空格，且字符串首尾没空格。
    reverse(s, 0, s.size() - 1);
    int start = 0; //removeExtraSpaces后保证第一个单词的开始下标一定是0。
    for (int i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') { //到达空格或者串尾，说明一个单词结束。进行翻转。
            reverse(s, start, i - 1); //翻转，注意是左闭右闭 []的翻转。
            start = i + 1; //更新下一个单词的开始下标start
        }
    }
    return s;
}
// <<< LeetCode_151——反转字符串中的单词 <<<


// >>> KamaCoder_55——右旋字符串 >>>
// (25/09/22 DONE: 32 ms, 2180 kB)
string string_cx::rightSpinString(string& s) {
    reverse(s, 0, s.size()-1);

    reverse(s, 0, n-1);
    reverse(s, n, s.size()-1);
}
// <<< KamaCoder_55——右旋字符串 <<<


// >>> LeetCode_028——找出字符串中第一个匹配项的下标 >>>
// (25/09/23 UNDONE!!!)
void getNext(int* next, const string& s) {
    int j = -1;
    next[0] = j;

    for (int i = 1; i < s,size(); i++) {                // i从1开始
          while (j >=0 && s[i] != s[j+1]) {               // 前后缀不同的情况
            j = next[j];                                // 向前后退
        }
        if (s[i] == s[j+1]) {                           // 前后缀相同
            j++;
        }
        next[i] = j;                                    // 将j（前缀长度）赋给next[i]
    }

}

int string_cx::strStr(string haystack, string needle) {
    if (needle.size() == 0) {return 0;}

    vector<int> next(needle.size());
    getNext(&next[0], needle);

    int j = -1;
    for (int i = 0; i < haystack.size(); i++) {        	// i从0开始
        while (j>=0 && haystack[i] != needle[j+1]) {   	// 不匹配
            j = next[j];
        }
        if (haystack[i] == needle[j+1]) {
            j++;
        }
        if (j == needle.size()-1 )						// 文本串s里出现了模式串t
            return (i - needle.szie()+1);
        }
    }
    return -1;
}
// <<< LeetCode_028——找出字符串中第一个匹配项的下标 <<<


// >>> LeetCode_459——重复的子字符串 >>>
// (25/09/28 UNDONE!!!)
void getNext_0(int* next, string& s) {
	int j = 0;
	next[0] = j;

	for (int i = 1; i < s.size(); i++) {
		while (j > 0 && s[i] != s[j]) {
			j = next[j-1];
		}
		if (s[i] == s[j]) {
			j++;
		}
		next[i] = j;
	}

}

bool string_cx::repeatedSubstringPattern(string s) {
    if (s.size() == 0) {
        return false;
    }
    int next[s.size()];
    getNext_0(next, s);
    int len = s.size();
    if (next[len - 1] != 0 && len % (len - (next[len - 1] )) == 0) {
        return true;
    }
    return false;
}
// <<< LeetCode_459——重复的子字符串 <<<
