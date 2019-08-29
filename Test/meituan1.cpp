//
// Created by 13058 on 2019/8/22.
/*
 * 第1行输入一个整数n，代表字符串数量，n最大为10000；
    第2~n+1行，每行一个字符串，字符串长度最大为100000；
    第n+2行开始，每行输入两个整数a和b，代表需要计算公共前缀的字符串编号。
    输出 返回a、b对应的字符串的最长公共前缀长度。如果a或b不是有效的字符串编号，则对该行不输出结果。

输入
4
abcdefg
acdef
acdfghijk
cdfg
1 2
2 3
3 4
输出
1
3
0
 */
//
#include <iostream>
#include <vector>
using namespace std;
int getFirst(string a,string b)
{
    if(a==""||b=="")
        return 0;
    int l=a.length()>b.length()?a.length():b.length();
    int i=0;
    while(i<l){
        if(a[i]==b[i])
            i++;
        else
            break;
    }
    return i;

}
int main(){
    int n;
    cin>>n;
    vector<string> str;
    for (int i = 0; i < n; ++i) {
        string t;
        cin>>t;
        str.push_back(t);
    }
    int a,b;
    while(cin>>a>>b)
    {
        cout<<getFirst(str[a-1],str[b-1])<<endl;
    }
    return 0;
}