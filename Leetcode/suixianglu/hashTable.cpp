//
// Created by cx on 25-9-15.
//

#include "./hashTable.h"

// >>> LeetCode_242——有效的字母异位词 >>>
// (25/09/17 DONE: 0 ms——100.00%, 9.46 MB——83.30%)
bool hashTable::isAnagram(string s, string t) {
    // ======= SuiXiangLu Solution =======
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
    // ======= SuiXiangLu Solution =======
}
// <<< LeetCode_242——有效的字母异位词 <<<


// >>> LeetCode_349——两个数组的交集 >>>
// (25/09/17 DONE: 0 ms——100.00%, 14.55 MB——9.37%)
vector<int> hashTable::intersection(vector<int>& nums1, vector<int>& nums2) {
    // ======= SuiXiangLu Solution =======
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
    // ======= SuiXiangLu Solution =======
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
    // ======= SuiXiangLu Solution =======
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
    // ======= SuiXiangLu Solution =======
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

    // ======= Leetcode Solution =======
    unordered_map<int, int> countAB;
    for (int u: nums1) {
        for (int v: nums2) {
            ++countAB[u + v];
        }
    }
    int ans = 0;
    for (int u: nums3) {
        for (int v: nums4) {
            if (countAB.count(-u - v)) {
                ans += countAB[-u - v];
            }
        }
    }
    return ans;
    // ======= Leetcode Solution =======
}
// <<< LeetCode_454——四数相加II <<<


// >>> Leetcode_383——赎金信 >>>
// (25/09/18 DONE: 0 ms——100.00%, 11.50 MB——79.37%)
bool hashTable::canConstruct(string ransomNote, string magazine) {
    int alphabet[26] = {0};
    for (int j = 0; j < magazine.size(); j++) {
        alphabet[magazine[j] - 'a']++;
    }
    for (int i = 0; i < ransomNote.size(); i++) {
        alphabet[ransomNote[i] - 'a']--;
        if (alphabet[ransomNote[i]-'a'] < 0) {
            return false;
        }
    }
    return true;
}
// <<< Leetcode_383——赎金信 <<<


vector<vector<int>> hashTable::threeSum(vector<int>& nums) {
    // ======= SuiXiangLu Solution--HashTable =======
    // 在一个数组中找到3个数形成的三元组，它们的和为0，不能重复使用（三数下标互不相同），且三元组不能重复。
    // b（存储）== 0-(a+c)（检索）
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        // 如果a是正数，a<b<c，不可能形成和为0的三元组
        if (nums[i] > 0)
            break;

        // [a, a, ...] 如果本轮a和上轮a相同，那么找到的b，c也是相同的，所以去重a
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        // 这个set的作用是存储b
        unordered_set<int> set;

        for (int k = i + 1; k < nums.size(); k++) {
            // 去重b=c时的b和c
            if (k > i + 2 && nums[k] == nums[k - 1] && nums[k - 1] == nums[k - 2])
                continue;

            // a+b+c=0 <=> b=0-(a+c)
            int target = 0 - (nums[i] + nums[k]);
            if (set.find(target) != set.end()) {
                result.push_back({nums[i], target, nums[k]});   // nums[k]成为c
                set.erase(target);
            }
            else {
                set.insert(nums[k]);                            // nums[k]成为b
            }
        }
    }
    return result;
    // ======= SuiXiangLu Solution--HashTable =======

    // ======= SuiXiangLu Solution--Double Pointer =======
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    // 找出a + b + c = 0
    // a = nums[i], b = nums[left], c = nums[right]
    for (int i = 0; i < nums.size(); i++) {
        // 排序之后如果第一个元素已经大于零，那么无论如何组合都不可能凑成三元组，直接返回结果就可以了
        if (nums[i] > 0) {
            return result;
        }
        // 错误去重a方法，将会漏掉-1,-1,2 这种情况
        /*
        if (nums[i] == nums[i + 1]) {
            continue;
        }
        */
        // 正确去重a方法
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        int left = i + 1;
        int right = nums.size() - 1;
        while (right > left) {
            // 去重复逻辑如果放在这里，0，0，0 的情况，可能直接导致 right<=left 了，从而漏掉了 0,0,0 这种三元组
            /*
            while (right > left && nums[right] == nums[right - 1]) right--;
            while (right > left && nums[left] == nums[left + 1]) left++;
            */
            if (nums[i] + nums[left] + nums[right] > 0) right--;
            else if (nums[i] + nums[left] + nums[right] < 0) left++;
            else {
                result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                // 去重逻辑应该放在找到一个三元组之后，对b 和 c去重
                while (right > left && nums[right] == nums[right - 1]) right--;
                while (right > left && nums[left] == nums[left + 1]) left++;

                // 找到答案时，双指针同时收缩
                right--;
                left++;
            }
        }

    }
    return result;
    // ======= SuiXiangLu Solution--Double Pointer =======

}