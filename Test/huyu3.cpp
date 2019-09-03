//
// Created by 13058 on 2019/9/3.
/*
 * 输入描述:
 * 每个输入数据包含多个测试点。每个测试点后有一个空行。 第一行为测试点的个数T(T<=100)。 每个测试点包含1行，为一个字符串”HH:MM:SS”，表示钟表显示的时间。
 * 输出描述:对于每个测试点，输出一行。
 * 如果钟表显示的时间为真实存在的时间，则不做改动输出该时间，
 * 否则输出一个新的”HH:MM:SS”，表示修改最少的数字情况下，字典序最小的真实存在的时间。
 */
//

#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        string time;
        cin>>time;
        if(time[0]>'2'||time[0]=='2'&&time[1]>'3')
            time[0]='0';

        if(time[3]>'5')
            time[3]='0';
        if(time[6]>'5')
            time[6]='0';
        cout<<time<<endl;
    }
    return 0;
}