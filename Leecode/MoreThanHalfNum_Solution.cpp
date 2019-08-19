//
// Created by 13058 on 2019/8/14.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int MoreThanHalfNum_Solution(vector<int> num) {
    if(num.size()==0)
        return 0;
    if(num.size()==1)
        return num[0];


    sort(num.begin(),num.end());
    map<int,int> mp;
    for (int i = 0; i <num.size() ; ++i) {
        mp[num[i]]++;
        if(mp[num[i]]>num.size()/2)
            return num[i];
    }
    return 0;
}
