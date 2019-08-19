//
// Created by 13058 on 2019/8/18.
/*
 * 薯队长来到了迷宫的尽头，面前出现了N只魔物，Hi表示第i只魔物的血量，
 * 薯队长需要在T个回合内击败所有魔物才能获胜。每个回合薯队长可以选择物理攻击一只魔物，
 * 对其造成1点伤害（物理攻击次数无上限）;  或者消耗1点法力释放必杀技对其造成固定X点伤害（薯队长开始拥有M点法力）。
 * 问X至少多大，薯队长才有机会获胜；如果无论如何都无法在T回合内获胜，则输出-1
 * 测试用例：
 *  输入 3 4 3    输出 3
 *      5 2 1
 */
//
#include <iostream>
#include <vector>
using namespace std;


int n,t, m;
vector<int> Hi;
int max(vector<int> a)
{
    int l=a.size(),max=0,res=0;
    if(l==0)
        return 0;
    max=a[0];
    for (int i = 0; i <l ; ++i) {
        if(a[i]>max)
        {
            max=a[i];
            res=i;
        }
    }
    return res;
}

bool isOK(int x) {
    int t1=t;
    vector<int> H;
    for (int i = 0; i <n ; ++i) {
        H.push_back(Hi[i]);
    }
    int m1=m;
    while(t1)
    {
        while(m1--)
        {
            H[max(H)]-=x;
            t1--;
        }
        if(t1>=0&&H[max(H)]<=0)
            return true;
        H[max(H)]--;
        t1--;
        if(t1>=0&&H[max(H)]<=0)
            return true;
    }
    return false;
}

int main()
{
    cin>>n>>t>>m;//怪物数，回合数，法力值
    if(n>t)
        return -1;
    for (int i = 0; i <n ; ++i) {
        int t;
        cin>>t;
        Hi.push_back(t);
    }
    int i=0,j=Hi[max(Hi)],x=j;
    while(i<j)  //二分查找
    {
        int t=(i+j)/2;
        if(x==t)
            break;
        else
            x=t;

        if(isOK(x))
            j=x;
        else
            i=x;
    }
    cout<<(isOK(i)?i:j)<<endl;
    return  0;
}
