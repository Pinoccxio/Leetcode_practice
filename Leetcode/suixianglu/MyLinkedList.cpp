//
// Created by cx on 25-9-2.
//

#include "MyLinkedList.h"

// >>> LeetCode_203——移除链表元素 >>>
// (25/05/13 DONE: 0 ms——100%, 19.82MB——55.56%)
MyLinkedList::ListNode* MyLinkedList::removeElements(ListNode* head, int val) {
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
MyLinkedList::ListNode* MyLinkedList::reverseList(ListNode* head) {
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


// >>> LeetCode_24——两两交换链表中的节点 >>>
// (25/09/02 DONE: 0 ms——100.00%, 11.09MB——21.80%)
MyLinkedList::ListNode* MyLinkedList::swapPairs(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* newHead = head -> next;
    head -> next = swapPairs(newHead -> next);
    newHead -> next = head;
    return newHead;

    // ======= Suixianglu Solution =======
    ListNode* dummyHead = new ListNode(0); // 设置一个虚拟头结点
    dummyHead->next = head; // 将虚拟头结点指向head，这样方便后面做删除操作
    ListNode* cur = dummyHead;
    while(cur->next != nullptr && cur->next->next != nullptr) {
        ListNode* tmp = cur->next; // 记录临时节点
        ListNode* tmp1 = cur->next->next->next; // 记录临时节点

        cur->next = cur->next->next;    // 步骤一
        cur->next->next = tmp;          // 步骤二
        cur->next->next->next = tmp1;   // 步骤三

        cur = cur->next->next; // cur移动两位，准备下一轮交换
    }
    ListNode* result = dummyHead->next;
    delete dummyHead;
    return result;
    // ======= Suixianglu Solution =======
}
// <<< LeetCode_24——两两交换链表中的节点 <<<


// >>> LeetCode_19——删除链表的倒数第 N 个结点 >>>
MyLinkedList::ListNode* MyLinkedList::removeNthFromEnd(ListNode* head, int n) {

}
// <<< LeetCode_19——删除链表的倒数第 N 个结点 <<<


// >>> LeetCode_interview02.07——链表相交 >>>
MyLinkedList::ListNode* MyLinkedList::getIntersectionNode(ListNode *headA, ListNode *headB) {

}
// <<< LeetCode_interview02.07——链表相交点 <<<
