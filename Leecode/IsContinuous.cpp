//
// Created by 13058 on 2019/8/13.
/*
 * 发现里面居然有2个大王,2个小王(一副牌原本是54张^_^)...
 * 他随机从中抽出了5张牌,想测测自己的手气,看看能不能抽到顺子,
 * 他想了想,决定大\小 王可以看成任何数字,并且A看作1,J为11,Q为12,K为13。
 * 上面的5张牌就可以变成“1,2,3,4,5”(大小王分别看作2和4),“So Lucky!”。
 * 如果牌能组成顺子就输出true，否则就输出false。为了方便起见,你可以认为大小王是0。
 */
//
#include <iostream>
#include <vector>
#include <map>
using namespace std;
bool IsContinuous( vector<int> num ) {
    if(num.size()!=5)
        return false;
    map<int,int> mp;
    int min=14,max=-1;
    for (int i = 0; i <5 ; ++i) {
        mp[num[i]]++;
        if(mp[num[i]]>=2&&num[i]!=0)//非王 出现了2次
            return false;
        if(num[i]>max&&num[i]!=0)
            max=num[i];
        if(num[i]<min&&num[i]!=0)
            min=num[i];
    }
    return (max-min<5)?true:false;
}
int main()
{
    return 0;
}
