/*算法：基数排序*/
/*********************************************************
Function:rxsort
Description:基数排序
Input:
    数组A[l,h]；
    数组中最大元素的位数d，例如最大数为999，则d为3；
    进制数k，如果是10进制数，k为10；
Output:排序好的数组；
Others：对数字1234来说，预定第0位为4，第1位为3，依次类推；
*********************************************************/
#include <iostream>
using namespace std;


bool rxsort(int A[],int l,int h,int d,int k){//l,h表示待排序的起止位置，d：最高位数，k：进制数
    if(NULL==A||l>h)
        return false;
    int size = h-l+1;

    int* counts = new int[k];//用于计数排序的辅助数据，详见计数排序
    int* temp = new int[size];//用于存储重新排序的数组
    int index;
    int pval=1;

    for(int i=0;i<d;i++){//依次处理不同的位d

        for(int j=0;j<k;j++)//每次counts数组清零
            counts[j] = 0;

        for(int j=l;j<=h;j++){ //统计每个桶中的记录数
            index = (int)(A[j]/pval)%k;
            counts[index]++;
        }

        for(int j=1;j<k;j++)//将tmp中的位置依次分配给每个桶
            counts[j] = counts[j] + counts[j-1];

        for(int j=h;j>=l;j--){//将所有桶中记录依次收集到tmp中
            index = (int)(A[j]/pval)%k;
            temp[counts[index]-1] = A[j];
            counts[index]--;
        }

        for(int j=0;j<size;j++) //将临时数组的内容复制到A[]中
            A[j+l] = temp[j];
        //更新pval
        pval = pval*k;
    }
    delete[] counts;
    delete[] temp;
}

int main(){
    int A[] = {712,303,4,18,89,999,70,26};
    rxsort(A,0,7,3,10);
    for(int i=0;i<8;i++)
        cout<<A[i]<<" ";
}