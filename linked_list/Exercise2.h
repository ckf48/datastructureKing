//
// Created by lenovo on 2021/1/31.
//

#ifndef DATASTRUCTUREKING_EXERCISE2_H
#define DATASTRUCTUREKING_EXERCISE2_H

#include "ListNode.h"

class Exercise2 {
public:
    /*2.1
     * 递归删除链表中值为x的项
     * */

    static void exercise1(ListNode* l, int x);

    /*2.2
     * 倒序输出链表的值
     * */

    static void exercise2(const ListNode* l);

    /*2.3
     * 删除链表中最小的节点
     * */

    static void exercise3(ListNode* l);

    /*2.4
     * 就地逆置链表
     * */

    static void exercise4(ListNode* l);

};


#endif //DATASTRUCTUREKING_EXERCISE2_H
