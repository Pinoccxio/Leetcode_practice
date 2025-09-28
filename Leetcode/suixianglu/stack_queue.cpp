//
// Created by chenx on 2025/9/24.
//

#include "./stack_queue.h"


// >>> LeetCode_232——用栈实现队列 >>>
// (25/09/24 DONE: 0 ms——100%, 9.56 MB——50.99%)
// MyQueue::MyQueue() { }

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
// MyStack::MyStack() { }

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


// >>> Leetcode_020——有效的括号 >>>
// (25/09/28 DONE: 0 ms——100%, 8.72 MB——67.68%)
bool stack_queue::isValid(string s) {
    stack<char> myStack;
    for (char c: s) {
        if (myStack.empty()) {
            myStack.push(c);
            continue;
        }
        switch(myStack.top()){
            case '(':
                if (c == ')') {
                    myStack.pop();
                } else {
                    myStack.push(c);
                }
            break;
            case '[':
                if (c == ']') {
                    myStack.pop();
                } else {
                    myStack.push(c);
                }
            break;
            case '{':
                if (c == '}') {
                    myStack.pop();
                } else {
                    myStack.push(c);
                }
            break;
            default:
                myStack.push(c);
            break;

        }
    }
    return myStack.empty();
}
// <<< Leetcode_020——有效的括号 <<<


// >>> Leetcode_1047——删除字符串中的所有相邻重复项 >>>
// (25/09/28 DONE: 3 ms——86.22%, 13.32 MB——86.36%)
string stack_queue::removeDuplicates(string s) {
    string result;
    for (char c: s) {
        if (result.empty() || c != result.back()) {
            result.push_back(c);
        }
        else {
            result.pop_back();
        }
    }
    return result;
}
// <<< Leetcode_1047——删除字符串中的所有相邻重复项 <<<


// >>> Leetcode_150——逆波兰表达式求值 >>>
// (25/09/28 DONE: 0 ms——100%, 16.93 MB——21.50%)
int stack_queue::evalRPN(vector<string>& tokens) {
    stack<long long> result;
    for (string token: tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            long long pre = result.top();
            result.pop();
            long long pre_pre = result.top();
            result.pop();

            if (token == "+") {
                result.push(pre_pre + pre);
            }
            else if (token == "-") {
                result.push(pre_pre - pre);
            }
            else if (token == "*") {
                result.push(pre_pre * pre);
            }
            else if (token == "/") {
                result.push(pre_pre / pre);
            }
        }
        else {
            result.push(stoll(token));
        }
    }
    return result.top();
}
// <<< Leetcode_150——逆波兰表达式求值 <<<


// >>> Leetcode_239——滑动窗口最大值 >>>
// (25/09/28 DONE:  40 ms——42.05%, 136.03 MB——53.13%)
vector<int> stack_queue::maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> myQue;
    vector<int> result;
    for (int i = 0; i < k; i++) {
        while(!myQue.empty() && nums[i] > myQue.back()) {
            myQue.pop_back();
        }
        myQue.push_back(nums[i]);
    }
    result.push_back(myQue.front());
    for (int i = k; i < nums.size(); i++) {
        if (myQue.front() == nums[i-k]){
            myQue.pop_front();
        }

        while(!myQue.empty() && nums[i] > myQue.back()) {
            myQue.pop_back();
        }
        myQue.push_back(nums[i]);
        result.push_back(myQue.front());
    }
    return result;
}
// <<< Leetcode_239——滑动窗口最大值 <<<