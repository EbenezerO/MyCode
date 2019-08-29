//
// Created by Administrator on 2019/8/5 0005.
//
#include <iostream>
using namespace std;

int Count(int years)
{
    int count=1; //第1月出生，
    for (int i = 1; i <=years ; ++i) {
        if(i>=3&&i<=6) //第3-6月生一只小羊
            count+=Count(years-i+1);//把新生羊加入，注意 需要+1 （生下即为第一月）
        else if(i==8) //第8月死亡
            count--;
    }
    return  count;
}
int main() {
    int n;//输入月份
    while(cin>>n)
    {
        cout<<Count(n)<<endl;
    }
    return 0;
}
