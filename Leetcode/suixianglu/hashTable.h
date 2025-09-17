//
// Created by cx on 25-9-15.
//

#ifndef HASHTABLE_H
#define HASHTABLE_H

#pragma once

#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class hashTable {
public:
    bool isAnagram(string s, string t);
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2);
	bool isHappy(int n);
};



#endif //HASHTABLE_H
