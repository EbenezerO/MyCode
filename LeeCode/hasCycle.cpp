//
// Created by 13058 on 2019/9/3.
/*
 * 判断给定的链表中是否有环
 *
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
bool hasCycle(ListNode *head) {
    if(head==NULL)
        return false;
    ListNode *fast=head,*slow=head;   //快慢指针
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
            return true;
    }
    return false;
}
int main()
{
    return 0;
}