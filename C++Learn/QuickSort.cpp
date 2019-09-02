//
// Created by 13058 on 2019/8/29.
//
#include <iostream>
#include <vector>
using namespace std;
void QuickSort(int *data,int start,int end)
{
    if(start>=end)
        return ;
    int i=start,j=end,temp=data[i];
    while (i<j)
    {
        while(temp<=data[j]&&i<j)
            j--;
        data[i]=data[j];
        while(temp>data[i]&&i<j)
            i++;
        data[j]=data[i];

    }
    data[i]=temp;             //注意记住将temp放回到data[i]
    QuickSort(data,start,i-1);
    QuickSort(data,i+1,end);

}
int main()
{
    int *b=new int[10];
    for (int i = 0; i < 10; ++i)
        b[i]=10-i;

    QuickSort(b,0,9);
    for (int j = 0; j <10 ; ++j)
        cout<<b[j]<<" ";

    return 0;
}

