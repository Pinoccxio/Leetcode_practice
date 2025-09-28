//
// Created by chenx on 2025/9/24.
//

#ifndef XIN_STACK_QUEUE_H
#define XIN_STACK_QUEUE_H

#pragma once

#include <stack>
#include <queue>
#include <string>

using namespace std;

class stack_queue {
public:
    // stack_queue();

    // Leetcode_020——有效的括号
    bool isValid(string s);

    // Leetcode_1047——删除字符串中的所有相邻重复项
    string removeDuplicates(string s);

    // Leetcode_150——逆波兰表达式求值
    int evalRPN(vector<string>& tokens);

    // Leetcode_239——滑动窗口最大值
    vector<int> maxSlidingWindow(vector<int>& nums, int k);

};


class MyQueue {
public:

    stack<int> InStack;
    stack<int> OutStack;

    // LeetCode_232——用栈实现队列
    // MyQueue();
    void push(int x);
    int pop();
    int peek();
    bool empty();
};


class MyStack {
public:

    queue<int> q1;
    queue<int> q2;

    // LeetCode_225——用队列实现栈
    // MyStack();
    void push(int x);
    int pop();
    int top();
    bool empty();
};


#endif //XIN_STACK_QUEUE_H