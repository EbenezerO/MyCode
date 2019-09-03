//
// Created by 13058 on 2019/9/2.
//

#include <iostream>
#include<vector>
using namespace std;
int InversePairs(vector<int> data) {
    int len=data.size();
    if(len<2)
        return 0;
    long long sum=0;
    for (int i = 1; i <len ; ++i) {
        for (int j = 0; j < i; ++j) {
            if(data[i]<data[j])
                sum++;
        }
    }
    return sum%1000000007;
}
int main()
{
    return 0;
}