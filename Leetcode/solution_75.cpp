//
// Created by chenx on 2025/4/30.
//

#include "./solution_75.h"



// LeetCode_1768——交替合并字符串 (25/05/07 DONE: 0 ms——100%, 8.46MB——48.23%)
string Solution_75::mergeAlternately(string word1, string word2) {
    // ======= LeetCode Solution =======
    int m = word1.size(), n = word2.size();
    int i = 0, j = 0;

    string ans;
    ans.reserve(m + n);
    while (i < m || j < n) {
        if (i < m) {
            ans.push_back(word1[i]);
            ++i;
        }
        if (j < n) {
            ans.push_back(word2[j]);
            ++j;
        }
    }
    return ans;
    // ======= LeetCode Solution =======


    // ======= My Code =======
    string &w1 = word1;
    string &w2 = word2;
    string mergeWord = "";
    int minLen = fmin(word1.length(), word2.length());
    for (int i = 0; i < minLen; i++)
    {
        mergeWord += w1[i];
        mergeWord += w2[i];
    }
    if (word1.length() < word2.length()) {
        mergeWord += word2.substr(word1.length());
    }
    else if (word1.length() > word2.length()) {
        mergeWord += word1.substr(word2.length());
    }
    return mergeWord;
    // ======= My Code =======


    // ======= Brilliant Answer in Comments =======
    // int minLen = Math.min(word1.length(), word2.length());
    // StringBuilder sb = new StringBuilder("");
    // for (int i = 0; i < minLen; i++) {
    //     sb.append(word1.charAt(i)).append(word2.charAt(i));
    // }
    // return sb.append(word1.substring(minLen)).append(word2.substring(minLen)).toString();
    // ======= Brilliant Answer in Comments =======

}



inline bool check(string t,string s){
    int lenx = (int)s.length() / (int)t.length();
    string ans = "";
    for (int i = 1; i <= lenx; ++i){
        ans = ans + t;
    }
    return ans == s;
}

//递归实现辗转相除法
inline int divisionAlgorithm(int a, int b){
    if(b == 0){
        return a;
    }
    return divisionAlgorithm(b, a % b);
}

// LeetCode_1071——字符串的最大公因子 (25/05/08 UNDONE!!!)
string Solution_75::gcdOfStrings(string str1, string str2) {
    // ======= LeetCode Solution =======
    int len1 = (int)str1.length(), len2 = (int)str2.length();
    for (int i = min(len1, len2); i >= 1; --i){ // 从长度大的开始枚举
        if (len1 % i == 0 && len2 % i == 0){
            string X = str1.substr(0, i);
            if (check(X, str1) && check(X, str2)) return X;
        }
    }
    return "";
    // ======= LeetCode Solution =======

    // ======= Brilliant Answer in Comments =======
    string t1 = str1 + str2;
    string t2 = str2 + str1;
    //如果str1 + str2 = str2 + str1，则肯定存在公因子
    if(t1 != t2){
        return "";
    }
    int len_1 = str1.length(),len_2 = str2.length();
    //求出len1与len2的最大公约数===>辗转相除法
    int index = divisionAlgorithm(len_1, len_2);
    //截取合并字符串前缀，前缀范围为：[0,两字符串的最大公约数]
    return t1.substr(0,index);
    // ======= Brilliant Answer in Comments =======
}



// LeetCode_1431——拥有最多糖果的孩子 (25/05/06 DONE: 0 ms——100%, 12.38MB——18.56%)
vector<bool> Solution_75::kidsWithCandies(vector<int>& candies, int extraCandies) {

    // ======= LeetCode Solution =======
    int n = candies.size();
    int maxCandies = *max_element(candies.begin(), candies.end());    // 利用<algorithm>库计算所有小朋友拥有的糖果数目最大值
    vector<bool> ret;                   // vector基于数组，但可以自动管理内存，不需要手动分配和释放内存！！！
    for (int i = 0; i < n; ++i) {
        ret.push_back(candies[i] + extraCandies >= maxCandies);             // push_back就很方便
    }
    return ret;
    // ======= LeetCode Solution =======


    // ======= My Code =======
    int max_num = 0;
    vector<bool> results(candies.size(), false);
    for (int candie : candies) {
        if (candie > max_num) {
            max_num = candie;
        }
    }
    for (int i = 0; i < candies.size(); i++) {
        if (candies[i] + extraCandies >= max_num) {
            results[i] = true;
        }
    }
    return results;
    // ======= My Code =======

}



// LeetCode_0605——种花问题 (25/05/12 DONE: 4 ms——9.27%, 26.59MB——5%)
bool Solution_75::canPlaceFlowers(vector<int>& flowerbed, int n) {
    // ======= LeetCode Solution =======
    int count = 0;
    int m = flowerbed.size();
    int prev = -1;
    for (int i = 0; i < m; ++i) {
        if (flowerbed[i] == 1) {
            if (prev < 0) {
                count += i / 2;
            } else {
                count += (i - prev - 2) / 2;
            }
            prev = i;
        }
    }
    if (prev < 0) {
        count += (m + 1) / 2;
    } else {
        count += (m - prev - 1) / 2;
    }
    return count >= n;
    // ======= LeetCode Solution =======


    // ======= My Code =======
    int len = flowerbed.size();
    vector<int> tmp(len+2, 0);
    tmp.insert(tmp.begin()+1,flowerbed.begin(), flowerbed.end());
    for (int i = 1; i <= len; i++) {
        if (tmp[i-1] == 0 && tmp[i] == 0 && tmp[i+1] == 0) {
            n--;
            tmp[i] = 1;
        }
    }
    return n <= 0;
    // ======= My Code =======
}



// LeetCode_0345——反转字符串中的元音字母
string Solution_75::reverseVowels(string s) {

    return "TODO";
}
