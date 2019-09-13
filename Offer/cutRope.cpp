//
// Created by 13058 on 2019/9/9.
/*
 * 给你一根长度为n的绳子，请把绳子剪成m段（m、n都是整数，n>1并且m>1），
 * 每段绳子的长度记为k[0],k[1],...,k[m]。请问k[0]xk[1]x...xk[m]可能的最大乘积是多少？
 * 例如，当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此时得到的最大乘积是18。
 */
//
#include <iostream>
#include<vector>
#include <math.h>
using namespace std;
int cutRope(int n)
{
    if(n==2)
        return 1;
    if(n==3)
        return 2;
    int a=n%3;
    int b=n/3;
    if(a==0)
        return pow(3,b);
    else if(a==1)
        return 4*pow(3,b-1);
    else
        return 2*pow(3,b);

}
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<cutRope(n)<<endl;
    }
    return 0;
}
