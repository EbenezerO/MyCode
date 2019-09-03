//
// Created by 13058 on 2019/9/3.
/*
 * 对于一个给定的链表，返回环的入口节点，如果没有环，返回null
 */
//

#include <iostream>
#include<vector>
using namespace std;
struct ListNode
{
    int val;
    struct ListNode*next;
    ListNode(int x):val(x),next(NULL){}
};
ListNode *detectCycle(ListNode *head) {
    if(head==NULL)
        return NULL;
    ListNode *fast=head,*slow=head;
    int f=0,s=0;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        f+=2,s++;
        if(fast==slow)
        {
            fast=head;
            while (fast!=slow)
            {
                fast=fast->next;
                slow=slow->next;
            }
            return fast;
        }
    }
    return NULL;
}
int main()
{
    return 0;
}