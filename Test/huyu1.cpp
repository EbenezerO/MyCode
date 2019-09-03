//
// Created by 13058 on 2019/9/3.
//
/*
 * 假定每个小朋友只知道有多少同学和自己拿到了相同颜色的糖果
 *
 * 输入描述:假定部分小朋友的回答用空格间隔，如 1 1 3
 * 输出描述:直接打印最少有多少位小朋友拿到糖果如 6
 *
 * 解释：第一个小朋友发现有1人和自己糖果颜色一样，第二个小朋友也发现有1人和自己糖果颜色一样，第三个小朋友发现有3人和自己糖果颜色一样。
 *  第一二个小朋友可互相认为对方和自己颜色相同，比如红色；
 *  第三个小朋友不可能再为红色（否则第一二个小朋友会发现有2人和自己糖果颜色相同），
 *  假设他拿到的为蓝色糖果，那么至少还有另外3位同学拿到蓝色的糖果，最终至少有6位小朋友拿到了糖果。
 */

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int>mp;
    int num;
    while(cin>>num) {
        if(mp.find(num) == mp.end()) {//没有则建立字典
            mp.insert(make_pair(num, 1));
        }
        else
            mp.find(num)->second += 1;
    }
    int res = 0;
    for(map<int,int>::iterator i=mp.begin(); i!=mp.end(); ) {
        if(i->first == 0) {//均不同则键对应的值就是人数
            res += i->second;
            ++i;
        }
        else {
            res += i->first+1;
            if(i->second <= i->first+1) ++i;
            else i->second -= i->first;
        }
    }
    cout<< res << endl;
}
