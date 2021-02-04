//
// Created by lenovo on 2021/2/3.
//

#include "ListNode.h"

ListNode::ListNode(int val, ListNode *next, ListNode *pre) : val(val), next(next), pre(pre) {}

ListNode::ListNode(int val, ListNode *next) : val(val), next(next) {}

ListNode::ListNode(int val) : val(val) {}

ListNode::~ListNode() = default;
