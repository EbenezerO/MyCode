//
// Created by 13058 on 2019/9/12.
//

#include <iostream>
#include<vector>
#include <sstream>
using namespace std;
bool isNum(string str)
{
    stringstream sin(str);
    double d;
    char c;
    if(!(sin >> d))
        return false;
    if (sin >> c)
        return false;
    return true;
}
int main()
{
    string a;
    cin>>a;
    int l=a.length();
    int count=0;
    vector<string> vt;
    string t="";
    for (int i = 0; i <l ; ++i) {
        if(a[i]==','&&t!="")
        {
            vt.push_back(t);
            t="";
        }
        if(a[i]!=',')
            t+=a[i];
    }
    vt.push_back(t);
    for (int j = 0; j < vt.size(); ++j) {
        int len=vt[j].size();
        if(len>=2)
        {
            if(isNum(vt[j]))
            {
                stringstream ss;
                ss<<vt[j];
                int x;
                ss>>x;
                if(x<=9&&x>='0')
                    continue;
            }
            if(vt[j][0]>='0'&&vt[j][len-1]>='0'&&vt[j][0]<='9'&&vt[j][len-1]<='9')
            {
                int a=vt[j][0]-'0';
                int b=vt[j][len-1]-'0';
                if(a+b>8)
                    count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}