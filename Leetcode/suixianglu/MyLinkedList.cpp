//
// Created by cx on 25-9-2.
//

#include "MyLinkedList.h"

// >>> LeetCode_203——移除链表元素 >>>
// (25/05/13 DONE: 0 ms——100%, 19.82MB——55.56%)
ListNode* removeElements(ListNode* head, int val) {
    ListNode* cur = new ListNode(0);
    cur->next = head;
    ListNode* res = cur;

    while (cur->next != nullptr) {
        if (cur->next->val == val) {
            cur->next = cur->next->next ;
        }
        else {
            cur = cur->next;
        }
    }
    return res->next;
}
// <<< LeetCode_203——移除链表元素 <<<


// >>> LeetCode_707——设计链表 >>>
// (25/09/01 DONE: 3 ms——96.00%, 25.81MB——5%)
MyLinkedList::MyLinkedList() {
    d_list = new DoubleLinkList(0);
    d_list -> next = d_list;
    d_list -> prev = d_list;
    list_size = 0;
}

int MyLinkedList::get(int index) {
    if (index > (list_size - 1) || index < 0) { // 检查索引是否超出范围
        return -1; // 如果超出范围，返回-1
    }
    DoubleLinkList* tmp = d_list -> next;
    for (int i = 0; i < index; i++) {
        tmp = tmp -> next;
    }
    return tmp -> val;
}

void MyLinkedList::addAtHead(int val) {
    DoubleLinkList* newNode = new DoubleLinkList(val);
    DoubleLinkList* ori_next = d_list -> next;
    newNode -> next = ori_next;
    newNode -> prev = d_list;
    list_size++;
    ori_next -> prev = newNode;
    d_list -> next = newNode;
}

void MyLinkedList::addAtTail(int val) {
    DoubleLinkList* newNode = new DoubleLinkList(val);
    DoubleLinkList* ori_tail = d_list -> prev;
    newNode -> prev = ori_tail;
    newNode -> next = d_list;
    list_size++;
    ori_tail -> next = newNode;
    d_list -> prev = newNode;
}

void MyLinkedList::addAtIndex(int index, int val) {
    if (index > list_size) return;
    if (index < 0) index = 0;
    DoubleLinkList* tmp = d_list -> next;
    for (int i = 0; i < index; i++) {
        tmp = tmp -> next;
    }
    DoubleLinkList* newNode = new DoubleLinkList(val);
    DoubleLinkList* prevNode = tmp -> prev;
    newNode -> prev = prevNode;
    newNode -> next = tmp;
    list_size++;
    prevNode -> next = newNode;
    tmp -> prev = newNode;
}

void MyLinkedList::deleteAtIndex(int index) {
    if (index < 0 || index >= list_size) return;
    DoubleLinkList* tmp = d_list -> next;
    for (int i = 0; i < index; i++) {
        tmp = tmp -> next;
    }
    tmp -> prev -> next = tmp -> next;
    tmp -> next -> prev = tmp -> prev;
    delete tmp;
    list_size--;
}
// <<< LeetCode_707——设计链表 <<<


// >>> LeetCode_206——翻转链表 >>>
// (25/09/02 DONE: 0 ms——100.00%, 13.04MB——90.88%)
ListNode* reverseList(ListNode* head) {
    ListNode* tmp = new ListNode(0);    // 存储下一个的结点以防断掉
    ListNode* slow = nullptr;           // 慢指针
    ListNode* fast = head;              // 快指针

    while(fast){
        tmp = fast -> next;
        fast -> next = slow;
        slow = fast;
        fast = tmp;
    }
    return slow;
}
// <<< LeetCode_206——翻转链表 <<<