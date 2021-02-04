//
// Created by lenovo on 2021/1/31.
//

#include <cstdlib>
#include <iostream>
#include "Exercise2.h"

using namespace std;

void Exercise2::exercise1(ListNode *l, int x) {
    if (l == nullptr) {
        return;
    }
    auto *dummyHead = new ListNode(-1, l);
    ListNode *p = dummyHead;
    ListNode *q = l;
    while (q != nullptr) {
        if (q->val == x) {
            p->next = q->next;
            free(q);
            q = p->next;
        } else {
            p = q;
            q = q->next;
        }

    }
    free(dummyHead);
}

void Exercise2::exercise2(const ListNode *l) {
    if (l->next != nullptr) {
        exercise2(l->next);
    }
    cout << l->val << " ";
}

void Exercise2::exercise3(ListNode *l) {
    auto *min = new ListNode(INT_MAX);
    ListNode *dle = min;
    ListNode *p = l;
    auto *dummyHead = new ListNode(-1, l);
    ListNode *minPre = dummyHead;
    ListNode *pre = dummyHead;
    while (p != nullptr) {
        if (p->val < min->val) {
            min = p;
            minPre = pre;
        }
        p = p->next;
        pre = pre->next;
    }
    minPre->next = min->next;
    free(min);
    free(dle);
    free(dummyHead);
}

void Exercise2::exercise4(ListNode *l) {
    auto *dummyHead = new ListNode(-1, l);
    ListNode *p = dummyHead;
    ListNode *q = l;
    while(q != nullptr){
        ListNode* r = q->next;
        q->next = p;
        p = q;
        q = r;
    }

    delete dummyHead;

}
