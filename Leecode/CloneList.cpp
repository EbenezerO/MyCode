//
// Created by 13058 on 2019/8/23.
/*
 * 输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，另一个特殊指针指向任意一个节点），
 * 返回结果为复制后复杂链表的head。（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）
 */
//
#include <iostream>
#include <vector>
using namespace std;

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};

void GetRandom(RandomListNode *p, RandomListNode *q, RandomListNode *phead, RandomListNode *head) {
    RandomListNode *h1=phead,*h2=head;
    while(p->random!=h1)
    {
        h1=h1->next;
        h2=h2->next;
    }
    q->random=h2;
}

RandomListNode* Clone(RandomListNode* pHead)
{
    if(pHead==NULL)
        return NULL;

    RandomListNode *head=new RandomListNode(pHead->label),*p=pHead,*q=head;//p ：pHead链表，q:复制后链表
    while(p->next!=NULL)//处理next指针
    {
        p=p->next;
        q->next=new RandomListNode(p->label);;
        q=q->next;

    }
    p=pHead,q=head;
    GetRandom(p, q, pHead, head);
    while(p->next!=NULL)
    {
        //处理每一个节点的random指针
        p=p->next;
        q=q->next;
        GetRandom(p, q, pHead, head);
    }
    return head;
}

int main()
{
    return 0;
}