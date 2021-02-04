//
// Created by lenovo on 2021/2/3.
//

#ifndef DATASTRUCTUREKING_LISTNODE_H
#define DATASTRUCTUREKING_LISTNODE_H


class ListNode {
public:
    int val;
    ListNode* next;
    ListNode* pre;

    ListNode(int val, ListNode *next);

    ListNode(int val);

    ListNode(int val, ListNode *next, ListNode *pre);

    virtual ~ListNode();
};


#endif //DATASTRUCTUREKING_LISTNODE_H
