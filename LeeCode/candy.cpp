//
// Created by 13058 on 2019/9/5.
//
/*
 * 有N个小朋友站在一排，每个小朋友都有一个评分
 * 你现在要按以下的规则给孩子们分糖果：每个小朋友至少要分得一颗糖果
 * 分数高的小朋友要他比旁边得分低的小朋友分得的糖果多
 *
 * 你最少要分发多少颗糖果？
 *
 * 动态规划
 */
#include <iostream>
#include<vector>
using namespace std;
int candy(vector<int> &ratings) {
    int size=ratings.size();
    if(size<=0)
        return 0;
    vector<int> num1(size,0),num2(size,0);//num1[i] 记录从左->右遍历第i个小朋友分的糖果数  num2[i] 记录从右->左遍历第i个小朋友分的糖果数
    num1[0]=1; //初始化
    for (int i = 1; i <size ; ++i) {//从左->右遍历
        if(ratings[i]>ratings[i-1])
            num1[i]=num1[i-1]+1;
        else
            num1[i]=1;
    }

    num2[size-1]=1; //初始化
    for (int i = size-2; i>=0 ; --i) {//从右->左遍历
        if(ratings[i]>ratings[i+1])
            num2[i]=num2[i+1]+1;
        else
            num2[i]=1;
    }
    int res=0;
    for (int j = 0; j < size; ++j) {
        res+=num1[j]>num2[j]?num1[j]:num2[j];
    }
    return res;
}
int main()
{
    return 0;
}