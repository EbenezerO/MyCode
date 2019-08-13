//
// Created by Administrator on 2019/8/12 0012.
//
#include <iostream>
#include <list>
using namespace std;
list<int> l;
int LastRemaining_Solution(int n, int m)
{
    if(n<1||m<1)
        return -1;
    for (int i = 0; i <n ; ++i)
        l.push_back(i);
    int index=-1;
    list<int>::iterator it=l.begin();
    while(l.size()>1)
    {
       index=(index+m)%l.size();
        for (int i = 0; i <index ; ++i) {
            it++;
        }
       l.erase(it);

    }
    return *l.begin();
}
int main()
{
    int n, m;
    cin>>n>>m;
    cout<<LastRemaining_Solution(n,m);
    return 0;
}
