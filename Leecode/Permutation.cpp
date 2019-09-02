//
// Created by 13058 on 2019/9/2.
/*
 * 题目描述
 *   输入一个字符串,按字典序打印出该字符串中字符的所有排列。例如输入字符串abc,则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。
 *输入描述:
 *   输入一个字符串,长度不超过9(可能有字符重复),字符只包括大小写字母。
 */
//

#include <iostream>
#include<vector>
#include <set>
using namespace std;

set<string> temp;//用set来实现自动排序

void PermuHelper(string str,int size,int k)
{
    if(k==size) //递归终止条件
        temp.insert(str);
    else
    {
        PermuHelper(str,size,k+1);//固定第一个字符，递归取得 第一位后面的各种字符串组合
        for (int i = k+1; i <size ; ++i) {//再把第一个字符与后面每一个字符交换，并同样递归获得首位后面的字符串组合
            if(str[k]!=str[i])
            {
                char t=str[k]; //交换
                str[k]=str[i];
                str[i]=t;

                PermuHelper(str,size,k+1); //递归

                t=str[k];  //还原
                str[k]=str[i];
                str[i]=t;
            }
        }
    }

}
vector<string> Permutation(string str) {
    if(str=="")
        return vector<string>();

    PermuHelper(str,str.length(),0);
    vector<string> res;
    for(auto x:temp)
        res.push_back(x);

    return res;
}
int main()
{
    return 0;
}