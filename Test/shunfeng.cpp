//
// Created by 13058 on 2019/8/29.
/*
 * s输入：第一行3个数n,m,k代表人数，语言数，已知的信息数 接下来k行，每行两个数u,v，代表第u个人会第v种语言
 *
 * 输出需要准备的学习机的个数
 */
//

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a;
    vector<vector<int>> data;
    for (int i = 0; i < k; ++i) {
        int t1,t2;
        cin>>t1>>t2;
        a.push_back(t1);
        a.push_back(t2);
        data.push_back(a);
        a.clear();
    }
    return 0;
}