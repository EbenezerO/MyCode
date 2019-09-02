//
// Created by 13058 on 2019/8/30.
/*
 * 链表反转
 */
//

#include <iostream>
#include<vector>
using namespace std;

struct Node{
    int val;
    struct Node*next;
    Node(int x):val(x),next(NULL){}
};

Node * Reserver1(Node *h)
{
    if(h==NULL||h->next==NULL)
        return h;
    Node *head=new Node(h->val);
    while(h->next!=NULL)
    {
        Node *temp=new Node(h->next->val);
        temp->next=head;
        head=temp;
        h=h->next;
    }
    return head;
}//利用了O(n)的辅助空间

Node * Reserver2(Node *h)//使用O(1)的辅助空间
{
    if(h==NULL||h->next==NULL)
        return h;
    Node *res=new Node(0);//使用res的next指针来指向链表头节点
    res->next=h;

    while(h->next!=NULL)
    {
        Node *q=h->next;
        h->next=q->next;
        q->next=res->next;
        res->next=q;
    }
    return res->next;
}

int main()
{
    Node *h=new Node(3);
    h->next=new Node(7);
    h->next->next=new Node(9);
    h=Reserver1(h);
    h=Reserver2(h);
    while (h!=NULL)
        cout<<h->val<<" ",h=h->next;
    return 0;
}