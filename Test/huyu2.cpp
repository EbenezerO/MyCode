//
// Created by 13058 on 2019/9/3.
//
/*
 * 输入描述:输入的第一行为一个正整数T（T<=10），表示测试数据组数。
 * 接下来有T组数据。每组数据的第一行为一个正整数N（1<=N<=200），表示接收到信息的次数。
 * 第二行为N个正整数，按时间从先到后的顺序表示接收到信息的会话id。会话id不大于1000000000。
 *
 * 输出描述:对于每一组数据，输出一行，按会话列表从上到下的顺序，输出会话id。
 * 相邻的会话id以一个空格分隔，行末没有空格。
 */

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int N;
        cin>>N;
        vector<long long> data;//保存所有数据
        set<long long> st;     //记录所有不重复的值
        for (int i = 0; i < N; ++i) {
            long long t;
            cin>>t;
            data.push_back(t);
            st.insert(t);
        }
        vector<long long > res;
        for (int i = data.size()-1; i >=0 ; i--) {
            if(st.find(data[i])!=st.end())// 找到
            {
                res.push_back(data[i]);
                st.erase(data[i]);
            }
        }

        for (int j = 0; j <res.size() ; ++j) {//控制输出,文末不可以有空格
            if(j!=res.size()-1)
                cout<<res[j]<<" ";
            else
                cout<<res[j]<<endl;
        }

    }
    return 0;
}
