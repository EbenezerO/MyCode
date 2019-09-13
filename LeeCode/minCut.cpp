//
// Created by 13058 on 2019/9/9.
/*
 * 给出一个字符串s，分割s使得分割出的每一个子串都是回文串
 * 计算将字符串s分割成回文分割结果的最小切割数
 *
 * 例如:给定字符串s="aab",
 * 返回1，因为回文分割结果["aa","b"]是切割一次生成的。
 */
//

#include <iostream>
#include <map>
using namespace std;
map<string,int> mp;
bool isPalindrome(string s)
{
    return s==string(s.rbegin(),s.rend());
}
int minCut(string s)
{
    if(isPalindrome(s))
        return 0;
    else
    {
        int min=s.length()-1;
        for (int i = 1; i <s.length() ; ++i) {
            int minc=minCut(s.substr(0,i))+minCut(s.substr(i,s.length()-i));
            if(min>minc)
                min=minc;
        }
        return 1+min;
    }
}

int main()
{
    string s;
    while (cin>>s)
        cout<<minCut(s)<<endl;
    return 0;
}