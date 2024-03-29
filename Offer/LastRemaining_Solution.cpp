//
// Created by 13058 on 2019/8/13.
/*
 * 随机指定一个数m,让编号为0的小朋友开始报数。
 * 每次喊到m-1的那个小朋友要出列唱首歌,然后可以在礼品箱中任意的挑选礼物,并且不再回到圈中,
 * 从他的下一个小朋友开始,继续0...m-1报数....这样下去....
 * 直到剩下最后一个小朋友,可以不用表演,并且拿到牛客名贵的“名侦探柯南”典藏版(名额有限哦!!^_^)。
 * 请你试着想下,哪个小朋友会得到这份礼品呢？(注：小朋友的编号是从0到n-1)
 *
 * 用list实现循环列表
 */
//
#include <iostream>
#include <list>

using namespace std;
int LastRemaining_Solution(int n, int m)//n为人数
{
    if(n<1||m<1)
        return -1;
    list<int> numbers;
    for(int i=0;i<n;i++)
        numbers.push_back(i);
    list<int>::iterator current=numbers.begin();
    while(numbers.size()>1)
    {
        for(int i=1;i<m;i++)//走m-1步到达第m个数处
        {
            ++current;
            if(current==numbers.end())
                current=numbers.begin();
        }

        list<int>::iterator next=++current;
        if(next==numbers.end())
            next=numbers.begin();
        --current;
        numbers.erase(current);
        current=next;
    }
    return *current;//对迭代器取值，等价于对指针取值
}
int main()
{
    int n,m;
    while(cin>>n>>m)
        cout<<LastRemaining_Solution(n,m)<<endl;
    return 0;
}

