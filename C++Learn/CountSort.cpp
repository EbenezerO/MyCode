//
// Created by 13058 on 2019/8/29.
//

#include <iostream>
#include <vector>

using namespace std;
void CountSort(int *data,int l,int r)
{
    int size=r-l+1,max=0,min=10000;
    for (int i = 0; i < size; ++i) {//得到最大值、最小值
        if(data[i]>max)
            max=data[i];
        if(data[i]<min)
            min=data[i];
    }
    int *count=new int[max-min+1];//建立计数数组 大小为max-min+1
    for (int j = 0; j < max-min+1; ++j) {//初始化count数组
        count[j]=0;
    }
    for (int k = 0; k < size; ++k) {//开始计数
        count[data[k]-min]++;
    }
    int index=0;
    for (int m = 0; m <max-min+1 ; ++m) {
        while(count[m]!=0)
        {
            data[index++]=m+min;
            count[m]--;
        }
    }
}
void CountSort1(vector<int> &arr, int maxVal) {
    int len = arr.size();
    if (len < 1)
        return;
    vector<int> count(maxVal+1, 0);
    vector<int> tmp(arr);//辅助存储 arr
    for (auto x : arr)
        count[x]++;
    for (int i = 1; i <= maxVal; ++i) //遍历count数组，对于每个元素x，计算出比x小的元素的个数，即count[i]=count[i]+count[i-1]。
        count[i] += count[i - 1];     // 即 得到元素 X 在已排序数组的下标为count[x]-1
    /*
    for (int i = len - 1; i >= 0; --i) {
        arr[count[tmp[i]] - 1] = tmp[i];
        count[tmp[i]]--;				//注意这里要减1
    }*/
    for (int i = 0; i <len; ++i) {
        arr[count[tmp[i]] - 1] = tmp[i];
        count[tmp[i]]--;
    }
}
int main()
{
    int A[] = {712,303,4,18,89,999,70,26};
    vector<int> B={712,303,4,18,89,999,70,26};
    CountSort(A,0,7);
    CountSort1(B,999);
    for(auto x:A)
        cout<<x<<" ";
    cout<<endl;
    for(auto y:B)
        cout<<y<<" ";
    return 0;
}




