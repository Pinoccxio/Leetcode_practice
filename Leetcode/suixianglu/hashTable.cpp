//
// Created by cx on 25-9-15.
//

#include "./hashTable.h"

// >>> LeetCode_242——有效的字母异位词 >>>
// (25/09/17 DONE: 0 ms——100.00%, 9.46 MB——83.30%)
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
// <<< LeetCode_242——有效的字母异位词 <<<

// >>> LeetCode_349——两个数组的交集 >>>
// (25/09/17 DONE: 0 ms——100.00%, 14.55 MB——9.37%)
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
// <<< LeetCode_349——两个数组的交集 <<<

// >>> LeetCode_202——快乐数 >>>
// (25/09/17 DONE: 0 ms——100.00%, 8.37 MB——22.62%)
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
// <<< LeetCode_202——快乐数 <<<

// >>> LeetCode_001——两数之和 >>>
// (25/09/17 DONE: 0 ms——100.00%, 14.44 MB——63.55%)
vector<int> hashTable::twoSum(vector<int>& nums, int target) {
    unordered_map <int, int> myMap;
    for (int i = 0; i < nums.size(); i++) {
        int num = target - nums[i];
        auto iter = myMap.find(num);
        if (iter != myMap.end()) {
            return {iter->second, i};
        }
        myMap.insert(pair<int, int>(nums[i],i));
    }
    return {};
}
// <<< LeetCode_001——两数之和 <<<

// >>> LeetCode_454——四数相加II >>>
// (25/09/18 DONE: 99 ms——94.86%, 27.57 MB—60.01%)
int hashTable::fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
    int count = 0;
    unordered_map<int,int> sums12;
    // 计算AB
    for (int num1:nums1) {
        for (int num2:nums2) {
            int sum12 = num1 + num2;
            auto find12 = sums12.find(sum12);
            if (find12 != sums12.end()) {
                find12->second++;
            }
            else {
                sums12.insert({sum12, 1});
            }
        }
    }

    // 计算CD
    for (int num3:nums3) {
        for (int num4:nums4) {
            int sum34 = num3 + num4;
            auto find34 = sums12.find((-sum34));
            if (find34 != sums12.end()) {
                count += find34->second;
            }
        }
    }
    return count;
}
// <<< LeetCode_454——四数相加II <<<
