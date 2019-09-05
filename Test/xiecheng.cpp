#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    };
};

/*请完成下面这个函数，实现题目要求的功能
******************************开始写代码******************************/
ListNode* partition(ListNode* head,int m) {
    if(head==NULL)
        return NULL;
    ListNode *p=head,*h1,*h2,*node;

    while (p->next!=NULL)
    {
        if(p->val<=m)
        {
            if(h1==NULL){
                node=new ListNode(p->val);
                h1=node;
            }else{
                node->next=new ListNode(p->val);
                node=node->next;
            }
        }

        else
        {
            if(h2==NULL){
                node=new ListNode(p->val);
                h2=node;
            }else{
                node->next=new ListNode(p->val);
                node=node->next;
            }
        }
    }
    p=h1;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=h2;
    return h1;
}
/******************************结束写代码******************************/


int main() {
    ListNode* head=NULL;
    ListNode* node=NULL;
    int m;
    cin>>m;
    int v;
    while(cin>>v){
        if(head==NULL){
            node=new ListNode(v);
            head=node;
        }else{
            node->next=new ListNode(v);
            node=node->next;
        }
    }
    head = partition(head,m);
    if(head!=NULL){
        cout<<head->val;
        node=head->next;
        delete head;
        head=node;
        while(head!=NULL){
            cout<<","<<head->val;
            node=head->next;
            delete head;
            head=node;
        }
    }
    cout<<endl;
    return 0;
}
