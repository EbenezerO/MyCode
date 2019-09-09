//
// Created by 13058 on 2019/9/8.
/*
 * 给定一个长度为N-1且只包含0和1的序列A1到AN-1，
 * 如果一个1到N的排列P1到PN满足对于1≤i<N，当Ai=0时Pi<Pi+1，
 * 当Ai=1时Pi>Pi+1，则称该排列符合要求，那么有多少个符合要求的排列？
 */
//
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> A;
    int data[N];
    int count=0;
    for (int i = 1; i < N; ++i) {
        int t;
        cin>>t;
        A.push_back(t);
        data[i-1]=i;
    }
    data[N-1]=N;
    do
    {
        int i;
        for ( i= 0; i < A.size();) {
            if(A[i]==0&&data[i]<data[i+1]||A[i]==1&&data[i]>data[i+1])
                i++;
            else
                break;
        }
        if(i==A.size())
            count++;
    }
    while(next_permutation(data,data+N));
    cout<<count<<endl;
    
    return 0;
}
