#include <iostream>

#include "Leetcode/interview_75/interview_75.h"
#include "Leetcode/suixianglu/Array.h"
#include "Leetcode/suixianglu/MyLinkedList.h"

using namespace std;
// tip: Run-(Shift + F10)
// tip: Debug-(Shift + F9)
// tip: Breakpoint-(Ctrl + F8)

int main() {
    Interview_75 Interview_75;
    Array array;

    // ======= mergeAlternately =======
    // string word1 = "abc";
    // string word2 = "pqr";
    // string merge = Interview_75.mergeAlternately(word1, word2);
    //
    // printf("%s\n", merge.c_str());
    // ======= mergeAlternately =======

    // ======= gcdOfStrings =======
    // string str1 = "ABCDE";
    // string str2 = "ABC";
    // string gcd = Interview_75.gcdOfStrings(str1, str2);
    // printf("%s\n", gcd.c_str());
    // ======= gcdOfStrings =======

    // ======= canPlaceFlowers =======
    // vector<int> flowerbed;
    // flowerbed.push_back(1);
    // flowerbed.push_back(0);
    // flowerbed.push_back(0);
    // flowerbed.push_back(0);
    // flowerbed.push_back(0);
    // flowerbed.push_back(0);
    // flowerbed.push_back(1);
    // int n = 2;
    // bool plant = Interview_75.canPlaceFlowers(flowerbed, n);
    // cout << plant << endl;
    // ======= canPlaceFlowers =======
    MyLinkedList my_linked_list;
    my_linked_list.addAtHead(1);
    my_linked_list.addAtTail(3);
    cout << my_linked_list.get(1) << endl;
    return 0;
}