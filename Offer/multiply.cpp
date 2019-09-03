//
// Created by Administrator on 2019/8/6 0006.
//
/*
 * 给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],
 * 其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法。
""*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> multiply(const vector<int>& a) {
    int l=a.size();
    if(l==0)
        return vector<int>();
    vector<int> res(l,1);//初始化res size=l, 值全为1
    for (int i = 1; i <l ; ++i) {//计算下三角元素的累乘
        res[i]=res[i-1]*a[i-1];
    }
    int temp=1;
    for (int j = l-2; j >=0 ; --j) {
        temp*=a[j+1];//计算上三角元素的累乘
        res[j]*=temp;//将上下结果汇总
    }
    return  res;
}
int main(){
    vector<int> a;
    for (int i = 1; i <6 ; ++i) {
        a.push_back(i);
    }
    vector<int>b;
    b=multiply(a);
    for (int j = 1; j <6 ; ++j) {
        cout<<b[j]<<" ";
    }
    return  0;
}