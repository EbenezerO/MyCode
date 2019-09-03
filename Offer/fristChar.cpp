//
// Created by Administrator on 2019/8/12 0012.
/*
 * 请实现一个函数用来找出字符流中第一个只出现一次的字符。
 * 例如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。
 * 当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。
 * 如果当前字符流没有存在出现一次的字符，返回#字符。
 */
//
#include <iostream>
#include <map>
#include <vector>

using namespace std;
vector<char> res;//保存插入的先后顺序
map<char,int> f;//统计char的出现次数

//Insert one char from stringstream
void Insert(char ch)
{
    if(f[ch]==0)//在第一次的时候才插入
    {
        res.push_back(ch);
    }
    f[ch]++;
}
//return the first appearence once char in current stringstream
char FirstAppearingOnce()
{
    vector<char>::iterator it;
    for (it=res.begin(); it!=res.end() ; it++) {
        if(f[*it]==1)
            return *it;
    }
    return '#';
}
int main()
{
    char a;
    while(cin>>a)
    {
        if(a=='@')
            break;
        Insert(a);
    }
    cout<<FirstAppearingOnce();
    return 0;
}
