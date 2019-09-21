//
// Created by 13058 on 2019/9/21.
//

#include <iostream>
#include<vector>
#include <map>
#include <math.h>
using namespace std;
bool canSplit(int n,int sum,vector<int> vt)
{
    if(sum%2!=0)
        return false;
    int mid=sum/2;
    int i=0;
    sum=0;
    while(sum<mid)
    {
        sum+=vt[i];
        i++;
    }
    if(sum==mid)
        return true;
    sum-=vt[i];
    i=n-1;
    while (sum<mid)
    {
        sum+=vt[i];
        i--;
    }
    if(sum==mid)
        return true;
    else
        return false;

}
bool Jump(int s,int n,int k,vector<int> vt){

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> vt(n,0);
        for (int i = 0; i < n; ++i) {
            int temp;
            cin>>temp;
            vt[i]=temp;
        }
        if(Jump(0,n,k,vt))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}