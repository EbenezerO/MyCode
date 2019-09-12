//
// Created by 13058 on 2019/9/9.
/*
 * 输入一个整型数组，子数组为这个数组中连续的一个或者多个整数组成的数组。
 * 求所有子数组中的和的最大值。要求时间复杂度为O(n)。
 *
 * 例如，输入数组为[1, -3, 9, 10, -2, 3, -6, 5]。
 * 和最大的子数组为 [9, 10, -2, 3]，因此输出为该子数组的和20。
 */
//
#include <iostream>
using namespace std;
int getSubArrayMaxSum(int array[],int n)
{
    int *F=new int [n];
    F[0]=array[0];
    int max=F[0];//保存最大的子数组的和；
    for (int i = 1; i <n ; ++i) {
        F[i]=F[i-1]+array[i]>array[i]?F[i-1]+array[i]:array[i];
        if(max<F[i])
            max=F[i];
    }
    return max;
}
int main()
{
    int array[]={1, -3, 9, 10, -2, 3, -6, 5};
    int n=sizeof(array)/ sizeof(array[0]);
    cout<<getSubArrayMaxSum(array,n)<<endl;
    return 0;
}