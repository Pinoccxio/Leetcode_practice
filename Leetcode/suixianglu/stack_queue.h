//
// Created by chenx on 2025/9/24.
//

#ifndef XIN_STACK_QUEUE_H
#define XIN_STACK_QUEUE_H

#pragma once

#include <stack>

class stack_queue {
public:
    stack_queue();

};


class MyQueue {
public:

    stack<int> InStack;
    stack<int> OutStack;

    // LeetCode_232——用栈实现队列
    MyQueue();
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
    MyStack();
    void push(int x);
    int pop();
    int top();
    bool empty();
};


#endif //XIN_STACK_QUEUE_H