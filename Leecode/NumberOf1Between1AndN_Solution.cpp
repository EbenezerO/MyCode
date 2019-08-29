//
// Created by 13058 on 2019/8/23.
/*
 *  从1 到 n 中1出现的次数
 *  数学：
 *  1-9 1
 *  10-99 1*8+10+1  1*9+10
 *  100-999 20*8+100+20 20*9+100
 *  1000-9999 300*8+1000+300 300*9+1000
 */
//
#include <iostream>
using namespace std;

int get(int n) {
    int res=0;
    do
    {
        if(n%10==1)
            res++;
    }while(n/=10);
    return res;
}

int NumberOf1Between1AndN_Solution(int n)
{
    int count=0;
    while(n)
    {
        count+=get(n);
        n--;
    }
    return count;
}


int main()
{
    int n;
    while(cin>>n)
        cout<<NumberOf1Between1AndN_Solution(n)<<endl;
    return  0;
}
