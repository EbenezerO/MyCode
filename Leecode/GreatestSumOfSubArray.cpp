//
// Created by 13058 on 2019/9/2.
/*
 * :{6,-3,-2,7,-15,1,2,2},连续子向量的最大和为8(从第0个开始,到第3个为止)。
 * 给一个数组，返回它的最大连续子序列的和，(子向量的长度至少是1)
 */
//

#include <iostream>
#include<vector>
using namespace std;
int FindGreatestSumOfSubArray(vector<int> array) {
    if(array.size()==1)
        return 0;
    int res=array[0];
    int f=array[0];
    for (int i = 1; i < array.size(); ++i) {
        f=array[i]>(f+array[i])?array[i]:f+array[i];
        res=res>f?res:f;
    }
    return res;
}
int main()
{
    return 0;
}