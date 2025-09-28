#include <iostream>

#include "Leetcode/interview_75/interview_75.cpp"
#include "Leetcode/suixianglu/array.cpp"
#include "Leetcode/suixianglu/myLinkedList.cpp"
#include "Leetcode/suixianglu/string_cx.cpp"
#include "Leetcode/suixianglu/stack_queue.cpp"

using namespace std;
// tip: Run-(Shift + F10)
// tip: Debug-(Shift + F9)
// tip: Breakpoint-(Ctrl + F8)

int main() {
    Interview_75 interview_75;
    Array array;
    cout << "This is a test for Leetcode" << endl;

    // ======= mergeAlternately =======
    // string word1 = "abc";
    // string word2 = "pqr";
    // string merge = interview_75.mergeAlternately(word1, word2);
    //
    // printf("%s\n", merge.c_str());
    // ======= mergeAlternately =======

    // ======= gcdOfStrings =======
    // string str1 = "ABCDE";
    // string str2 = "ABC";
    // string gcd = interview_75.gcdOfStrings(str1, str2);
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
    // bool plant = interview_75.canPlaceFlowers(flowerbed, n);
    // cout << plant << endl;
    // ======= canPlaceFlowers =======

    // ======= design-linked-list =======
    // myLinkedList* my_linked_list = new MyLinkedList();
    // my_linked_list -> addAtHead(1);
    // my_linked_list -> addAtTail(3);
    // cout << my_linked_list -> get(1) << endl;
    // ======= design-linked-list =======

    // ======= Stack and Queue =======
    // stack_queue sq;
    // vector<int> nums = {1,3,-1,-3,5,3,6,7}; //[3,3,5,5,6,7] when k=3
    // vector<int> nums = {7, 2, 4}; //[7,4] when k=2
    // vector<int> nums = {1,3,1,2,0,5}; //[3,3,2,5] when k=3
    //
    // vector<int> maxs = sq.maxSlidingWindow(nums,3);
    // for (int max : maxs) {
    //     cout << max << endl;
    // }
    // ======= Stack and Queue =======


    return 0;
}