//
// Created by 13058 on 2019/9/16.
//
#include <iostream>
#include<vector>
using namespace std;

vector<int> printMatrix(vector<vector<int> > matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> res;

    // 输入的二维数组非法，返回空的数组
    if (row == 0 || col == 0)  return res;

    // 定义四个关键变量，表示左上和右下的打印范围
    int left = 0, top = 0, right = col - 1, bottom = row - 1;
    while (left <= right && top <= bottom)
    {
        // left to right
        //for (int i = left; i <= right; ++i)  res.push_back(matrix[top][i]);
        for (int i = top; i <= bottom; ++i)  res.push_back(matrix[i][left]);
        // top to bottom
        //for (int i = top + 1; i <= bottom; ++i)  res.push_back(matrix[i][right]);
        for (int i = left+1; i <= right; ++i)  res.push_back(matrix[bottom][i]);
        // right to left

        // bottom to top
        if (left != right)
            for (int i = bottom - 1; i >= top; --i)  res.push_back(matrix[i][right]);

        if (top != bottom)
            for (int i = right - 1; i > left; --i)  res.push_back(matrix[top][i]);

        left++,top++,right--,bottom--;
    }
    return res;
}
int getNum(vector<int> array,int s)
{
    if(array.size()==0)
        return 0;
    int l=0,r=0;
    int sum=0;
    int res=0;
    for(;;){
        while(r<array.size() && sum<s)
            sum+=array[r++];
        if(sum<s)
            break;
        res=max(res,r-l);
        sum-=array[l++];
    }
    return res;
}
int main()
{
    int n,s;
    cin>>n>>s;
    vector<int>data;
    for (int i = 0; i < n; ++i) {
        int t;
        cin>>t;
        data.push_back(t);
    }
    cout<<getNum(data,s)<<endl;
    return 0;
}
