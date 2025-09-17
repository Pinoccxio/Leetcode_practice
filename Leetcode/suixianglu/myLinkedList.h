//
// Created by cx on 25-9-2.
//

#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

#pragma once

using namespace std;


class myLinkedList {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    struct DoubleLinkList {
        int val;
        DoubleLinkList* next;
        DoubleLinkList* prev;
        DoubleLinkList(int x): val(x), next(nullptr), prev(nullptr) {}
    };

    // LeetCode_203——移除链表元素
    ListNode* removeElements(ListNode* head, int val);

    // >>> LeetCode_707——设计链表 >>>
    myLinkedList();
    int get(int index);
    void addAtHead(int val);
    void addAtTail(int val);
    void addAtIndex(int index, int val);
    void deleteAtIndex(int index);
    // <<< LeetCode_707——设计链表 <<<

    // LeetCode_206——翻转链表
    ListNode* reverseList(ListNode* head);

    // LeetCode_24——两两交换链表中的节点
    ListNode* swapPairs(ListNode* head);

    // LeetCode_19——删除链表的倒数第 N 个结点
    ListNode* removeNthFromEnd(ListNode* head, int n);

    // LeetCode_interview02.07——链表相交
    ListNode* getIntersectionNode(ListNode *headA, ListNode *headB);

    // LeetCode_142——环形链表 II
    ListNode *detectCycle(ListNode *head);
private:
    DoubleLinkList* d_list;
    int list_size;
};



#endif //MYLINKEDLIST_H
