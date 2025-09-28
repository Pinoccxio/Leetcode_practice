//
// Created by chenx on 2025/9/24.
//

#include "stack_queue.h"


// >>> LeetCode_232——用栈实现队列 >>>
// (25/09/24 DONE: 0 ms——100%, 9.56 MB——50.99%)
MyQueue::MyQueue() { }

void MyQueue::push(int x) { InStack.push(x); }

int MyQueue::pop() {
    int result;
    if (OutStack.empty()) {
        while(!InStack.empty()) {
            OutStack.push(InStack.top());
            InStack.pop();
        }
    }
    result = OutStack.top();
    OutStack.pop();
    return result;
}

int MyQueue::peek() {
    int res = this->pop(); // 直接使用已有的pop函数
    OutStack.push(res); // 因为pop函数弹出了元素res，所以再添加回去
    return res;
}

bool MyQueue::empty() {
    return InStack.empty() && OutStack.empty();
}
// <<< LeetCode_232——用栈实现队列 <<<


// >>> LeetCode_225——用队列实现栈 >>>
// (25/09/25 DONE: 0 ms——100%, 9.51 MB——14.13%)
MyStack::MyStack() { }

void MyStack::push(int x) { q1.push(x); }

int MyStack::pop() {
    while (!q1.empty() && q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }
    int result = q1.front();
    q1.pop();
    q1 = q2;
    while (!q2.empty()) {
        q2.pop();
    }
    return result;
}

int MyStack::top() {
    while (!q1.empty() && q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }
    int result = q1.front();
    q1.pop();
    q2.push(result);
    q1 = q2;
    while (!q2.empty()) {
        q2.pop();
    }
    return result;
}

bool MyStack::empty() {
    return q1.empty() && q2.empty();
}
// <<< LeetCode_225——用队列实现栈 <<<