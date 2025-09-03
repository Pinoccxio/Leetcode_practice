//
// Created by cx on 25-9-2.
//

#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

#pragma once


class MyLinkedList {
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

    // >>> LeetCode_707——设计链表 >>>
    MyLinkedList();
    int get(int index);
    void addAtHead(int val);
    void addAtTail(int val);
    void addAtIndex(int index, int val);
    void deleteAtIndex(int index);
    // <<< LeetCode_707——设计链表 <<<

private:
    DoubleLinkList* d_list;
    int list_size;
};



#endif //MYLINKEDLIST_H
