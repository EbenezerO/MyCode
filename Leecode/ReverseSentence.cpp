//
// Created by 13058 on 2019/8/19.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;
string ReverseSentence(string str) {
    int l=str.length();
    if(l==0)
        return "";
    vector<string> res;
    string t="";
    for(int i=0;i<l;i++)
    {
        if(str[i]!=' ')
            t=t+str[i];
        else
        {
            if(t!="")
            {
                res.push_back(t);
                t="";
            }

        }
    }
    res.push_back(t);
    t="";
    int s=res.size();
    for(int i=s-1;i>0;i--)
    {
        t+=res[i]+" ";
    }
    t+=res[0];
    return t;
}
int main()
{
    string a;
    while(getline(cin,a))//输入一行字符串
        cout<<ReverseSentence(a)<<endl;
    return  0;
}
