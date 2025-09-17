//
// Created by cx on 25-9-15.
//

#include "./hashTable.h"


bool hashTable::isAnagram(string s, string t) {
    int record[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        // 并不需要记住字符a的ASCII，只要求出一个相对数值就可以了
        record[s[i] - 'a']++;
    }
    for (int i = 0; i < t.size(); i++) {
        record[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (record[i] != 0) {
            // record数组如果有的元素不为零0，说明字符串s和t 一定是谁多了字符或者谁少了字符。
            return false;
        }
    }
    // record数组所有元素都为零0，说明字符串s和t是字母异位词
    return true;
}


vector<int> hashTable::intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> result_set; // 存放结果，之所以用set是为了给结果集去重
    int hash[1005] = {0}; // 默认数值为0
    for (int num : nums1) { // nums1中出现的字母在hash数组中做记录
        hash[num] = 1;
    }
    for (int num : nums2) { // nums2中出现话，result记录
        if (hash[num] == 1) {
            result_set.insert(num);
        }
    }
    return vector<int>(result_set.begin(), result_set.end());
}

// 取数值各个位上的单数之和
int getSum(int n) {
    int sum = 0;
    while (n) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}

bool hashTable::isHappy(int n) {
    unordered_set<int> set;
    while(1) {
        int sum = getSum(n);
        if (sum == 1) {
            return true;
        }
        // 如果这个sum曾经出现过，说明已经陷入了无限循环了，立刻return false
        if (set.find(sum) != set.end()) {
            return false;
        } else {
            set.insert(sum);
        }
        n = sum;
    }
}
