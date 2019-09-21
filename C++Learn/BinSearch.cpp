//
// Created by 欧阳柏强 on 2019/9/15.
//

/**
     * 二分查找普通实现。
     * @param srcArray 有序数组
     * @param key 查找元素
     * @return  不存在返回-1
     */
#include <iostream>
#include<vector>
using namespace std;

int binSearch(vector<int> srcArray, int key) {
    int mid;
    int start = 0;
    int end = srcArray.size()- 1;
    while (start <= end) {
        mid = (end - start) / 2 + start;
        if (key < srcArray[mid]) {
            end = mid - 1;
        } else if (key > srcArray[mid]) {
            start = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}
int main()
{
    return 0;
}