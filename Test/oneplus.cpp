//
// Created by 13058 on 2019/9/10.
//

#include <iostream>
#include<vector>
using namespace std;
int f(int x)
{
    int sum=0;
    while(x!=0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int g(int x)
{
    int sum=0;
    while (x)
    {
        sum++;
        x=x&(x-1);
    }
    return sum;

}

int main()
{
    int n;
    cin>>n;
    int count=0;
    for (int i = 1; i <=n; ++i) {
        if(f(i)==g(i))
            count++;
    }
    cout<<count<<endl;
    return 0;
}