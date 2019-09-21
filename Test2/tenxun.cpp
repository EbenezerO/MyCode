//
// Created by 13058 on 2019/9/16.
//
#include <iostream>
#include<vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;
bool isTelNum(int n,string s)
{
    if(n<11)
        return false;
    else
    {
        int i=0;
        for (; i < n; ++i) {
            if(s[i]=='8')
                break;
        }
        if(n-i>=11)
            return true;
        else
            return false;
    }
}

int Min(vector<int> vt)
{
    int min=100000;
    for (int i = 0; i < vt.size(); ++i) {
        if(vt[i]!=0&&min>vt[i])
            min=vt[i];
    }
    if(min==100000)
        return 0;
    return min;
}
void Print(vector<int> &vt,int k)
{
    while(k--) {
        int minV = Min(vt);
        cout << minV << endl;
        for (int i = 0; i < vt.size(); ++i) {
            if (vt[i] != 0)
                vt[i] -= minV;
        }
    }
}
void YiHuo()
{
    int n;
    cin>>n;
    vector<int> ai,bi;
    map<int,int>mp1,mp2;
    for (int i = 0; i < n; ++i) {
        int t;
        cin>>t;
        mp1[t]++;
    }
    for (int i = 0; i < n; ++i) {
        int t;
        cin>>t;
        mp2[t]++;
    }
    map<int,int>::iterator it1=mp1.begin();
    for (; it1!=mp1.end() ; it1++) {
        if(it1->second%2!=0)
            ai.push_back(it1->first);
    }
    map<int,int>::iterator it2=mp2.begin();
    for (; it2!=mp2.end() ; it2++) {
        if(it2->second%2!=0)
            bi.push_back(it2->first);
    }
    int re=0;

    for (int j = 0; j < ai.size(); ++j) {
        for (int i = 0; i < bi.size(); ++i) {
            re^=(ai[j]+bi[i]);
        }
    }
    cout<<re<<endl;
}
int main()
{
    int t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vt(n,0);
        for (int i = 0; i < n; ++i) {
            int t;
            cin>>t;
            vt[i]=t;
        }
        sort(vt.begin(),vt.end());
        if(n%2==0)
        {
            int mid=n/2,r1=0,r2=0;
            for (int i = 0; i < mid; ++i) {

            }
        }
    }
    return 0;
}
