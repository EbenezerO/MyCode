//
// Created by Administrator on 2019/8/6 0006.
/*
 * 请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。
 * 例如，字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。
 * 但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。
 * */

//
#include <iostream>
using  namespace std;
bool isNumeric(char* a)
{
    int i=0;
    if(a[i]=='\0')
        return false;
    if(a[i]=='+'||a[i]=='-')//状态0
        i++;
    if(a[i]=='\0')
        return false;

    while(a[i] <= '9' && a[i] >= '0')//状态1
        i++;

    if(a[i]=='\0')
        return true;
    else if(a[i]=='.')//状态2
    {
        i++;
        if(a[i]=='\0')
            return false;
        while(a[i] <= '9' && a[i] >= '0')
            i++;
        if(a[i]=='\0')
            return true;
        else if(a[i]=='e'||a[i]=='E')
            goto s3;
         else
            return false;
    }
    else if(a[i]=='e'||a[i]=='E')//状态3
    {
        s3:i++;
        if(a[i]=='\0')
            return false;
        if(a[i]=='-'||a[i]=='+')//状态5
        {
            i++;
            if(a[i]=='\0'||a[i] > '9' || a[i] < '0')
                return false;
        }

        while(a[i] <= '9' && a[i] >= '0')//状态4
            i++;

        if(a[i]=='\0')
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    char *a="123.45e+6";

    cout<<isNumeric(a);

    return  0;
}
