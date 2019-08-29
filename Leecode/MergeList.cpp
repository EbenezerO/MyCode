//
// Created by 13058 on 2019/8/23.
// 输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。
/*
 * 递归实现 空间换时间 O(n+m)
 */
//
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};
ListNode* Merge(ListNode* h1, ListNode* h2)
{
    if(h1==NULL)
        return h2;
    if(h2==NULL)
        return h1;
    ListNode* newNode;
    if(h1->val<h2->val)
    {
        newNode=new ListNode(h1->val);
        newNode->next=Merge( h1->next,  h2);
    }
    else
    {
        newNode=new ListNode(h2->val);
        newNode->next=Merge( h1,  h2->next);
    }
    return newNode;
}
int main()
{
    ListNode* h1=new ListNode(1);
    h1->next=new ListNode(5);
    h1->next->next=new ListNode(6);
    h1->next->next->next=new ListNode(7);

    ListNode* h2=new ListNode(2);
    h2->next=new ListNode(4);
    h2->next->next=new ListNode(6);
    h2->next->next->next=new ListNode(8);
    ListNode* res=Merge(h1,h2);
    while(res!=NULL)
    {
        cout<<res->val<<" ";
        res=res->next;
    }

    return 0;
}