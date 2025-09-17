//
// Created by cx on 25-9-2.
//

#include "./myLinkedList.h"

// >>> LeetCode_203——移除链表元素 >>>
// (25/05/13 DONE: 0 ms——100%, 19.82MB——55.56%)
myLinkedList::ListNode* myLinkedList::removeElements(ListNode* head, int val) {
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
myLinkedList::myLinkedList() {
    d_list = new DoubleLinkList(0);
    d_list -> next = d_list;
    d_list -> prev = d_list;
    list_size = 0;
}

// 链表索引
int myLinkedList::get(int index) {
    if (index > (list_size - 1) || index < 0) { // 检查索引是否超出范围
        return -1; // 如果超出范围，返回-1
    }
    DoubleLinkList* tmp = d_list -> next;
    for (int i = 0; i < index; i++) {
        tmp = tmp -> next;
    }
    return tmp -> val;
}

// 链表头部添加
void myLinkedList::addAtHead(int val) {
    DoubleLinkList* newNode = new DoubleLinkList(val);
    DoubleLinkList* ori_next = d_list -> next;
    newNode -> next = ori_next;
    newNode -> prev = d_list;
    list_size++;
    ori_next -> prev = newNode;
    d_list -> next = newNode;
}

// 链表头部添加
void myLinkedList::addAtTail(int val) {
    DoubleLinkList* newNode = new DoubleLinkList(val);
    DoubleLinkList* ori_tail = d_list -> prev;
    newNode -> prev = ori_tail;
    newNode -> next = d_list;
    list_size++;
    ori_tail -> next = newNode;
    d_list -> prev = newNode;
}

// 链表索引添加
void myLinkedList::addAtIndex(int index, int val) {
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

// 链表索引删除
void myLinkedList::deleteAtIndex(int index) {
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
myLinkedList::ListNode* myLinkedList::reverseList(ListNode* head) {
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
myLinkedList::ListNode* myLinkedList::swapPairs(ListNode* head) {
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
// (25/09/03 DONE: 0 ms——100.00%, 14.61MB——89.56%)
myLinkedList::ListNode* myLinkedList::removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0);
    dummy -> next = head;
    ListNode* slow = dummy;
    ListNode* fast = dummy;
    for (int i = 0; i < n+1; i++) {
        fast = fast -> next;
    }
    while (fast != nullptr) {
        slow = slow -> next;
        fast = fast -> next;
    }
    ListNode* tmp = slow -> next;
    slow -> next = tmp -> next;
    return dummy -> next;
}
// <<< LeetCode_19——删除链表的倒数第 N 个结点 <<<


// >>> LeetCode_interview02.07——链表相交 >>>
// (25/09/03 DONE: 42 ms——50.99%, 18.13MB——79.00%)
myLinkedList::ListNode* myLinkedList::getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* a_head = headA;
    ListNode* b_head = headB;
    int lenA = 0;
    int lenB = 0;
    while(a_head != nullptr) {
        lenA++;
        a_head = a_head -> next;
    }
    while(b_head != nullptr) {
        lenB++;
        b_head = b_head -> next;
    }   // 至此得到两个链表的长度，记得复原链表头结点

    a_head = headA;
    b_head = headB;
    int gap = lenA - lenB;
    if (gap > 0) {
        while(gap-- && a_head != nullptr) {
            a_head = a_head -> next;
        }
    }
    else if (gap < 0) {
        gap = abs(gap);
        while(gap-- && b_head != nullptr) {
            b_head = b_head -> next;
        }
    }   // 尾部对齐两个链表

    while(a_head != b_head) {
        a_head = a_head -> next;
        b_head = b_head -> next;
    }
    return a_head;
}
// <<< LeetCode_interview02.07——链表相交点 <<<

// >>> LeetCode_142——环形链表 II >>>
// (25/09/03 DONE: 12 ms——25.16%, 11.11MB——75.38%)
myLinkedList::ListNode* myLinkedList::detectCycle(ListNode *head) {
    ListNode* dummyHead = new ListNode(0);
    dummyHead -> next = head;
    ListNode* fast = dummyHead;
    ListNode* slow = dummyHead;
    ListNode* newHead = dummyHead;

    slow = slow -> next;
    if (slow == nullptr) {
        return NULL;
    }
    fast = fast -> next -> next;

    while (fast != slow) {
        if (fast != nullptr and fast -> next != nullptr) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        else {
            return NULL;
        }
    }

    while (newHead != slow) {
        newHead = newHead -> next;
        slow = slow -> next;
    }
    return newHead;
}
// <<< LeetCode_142——环形链表 II <<<
