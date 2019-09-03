//
// Created by 13058 on 2019/8/29.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * 使用vector容器配合建堆函数，构造最小堆，求前K大的数，最大堆求K小的数
 */
vector<int> HeapSort(vector<int> input, int k) {//Top K 个数
    int len=input.size();
    if(len<=0||k<=0||k>len)
        return vector<int>();

    vector<int> res(input.begin(),input.begin()+k);//前K个数入容器
    make_heap(res.begin(),res.end(),greater<int>());  //再入堆   最小堆使用greater<int>()  make_heap(res.begin(), res.end(), less<int>());

    for(int i=k;i<len;i++)
    {
        if(input[i]>res.front())
        {
            pop_heap(res.begin(),res.end(),greater<int>());//先pop_heap,然后在容器中删除
            res.pop_back();   //pop_heap()把堆顶元素放到了最后一位，然后对它前面的数字重建了堆。这样一来只要再使用pop_back()把最后一位元素删除，就得到了新的堆。

            res.push_back(input[i]);//先在容器中加入，再push
            push_heap(res.begin(),res.end(),greater<int>());
        }
    }
    sort(res.begin(),res.end());//使其从小到大输出
    return res;
}
vector<int> HS(vector<int> input,int k)//最小的K个数
{
    int len=input.size();
    if(len<=0||k<=0||k>len)
        return vector<int>();

    vector<int> res(input.begin(),input.begin()+k);
    make_heap(res.begin(),res.end());//默认为最大堆，

    for (int i = k; i <len ; ++i) {
        if(input[i]<res.front())
        {
            pop_heap(res.begin(),res.end());
            res.pop_back();
            res.push_back(input[i]);
            push_heap(res.begin(),res.end());
        }
    }
    sort(res.begin(),res.end());
    return res;
}

int main()
{
    vector<int> a;
    for (int i = 0; i < 10; ++i) {
        a.push_back(10-i);
    }
    vector<int > b=HeapSort(a,5);
    for (int j = 0; j < b.size(); ++j) {
        cout<<b[j]<<" ";
    }
    return 0;
}