//
// Created by 13058 on 2019/9/9.
//
/*
 * 用两个栈实现一个FIFO队列。
 */
#include <iostream>
#include<stack>
using namespace std;
stack<int> in,out;
void push(int x)
{
    in.push(x);
}
void pop()
{
    if(!out.empty())
    {
        cout<<out.top()<<" ";
        out.pop();
    }
    else{
        if(in.empty())
            cout<<"queue is empty,can't pop()"<<endl;
        while (!in.empty())
        {
            int x=in.top();
            in.pop();
            out.push(x);
        }
        cout<<out.top()<<" ";
        out.pop();
    }
}
int main()
{
    int t;
    push(1);
    push(2);
    pop();
    push(7);
    pop();
    pop();
    return 0;
}