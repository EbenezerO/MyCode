//
// Created by 13058 on 2019/9/12.
/*
 * https://blog.csdn.net/baidu_33604078/article/details/78951769
 * 走格子 动态规划问题
 */
//

#include <iostream>
#include<vector>

using namespace std;

int minPathSum(vector<vector<int>>& grid)
{
    int m = grid.size();
    int n = grid[0].size();
    //创建dp
    vector<vector<int>>dp(m, vector<int>(n, 0));
    // 初始化第一行
    dp[0][0] = grid[0][0];
    for(int j=1; j<n; ++j)
        dp[0][j] = dp[0][j-1] + grid[0][j];
    // 初始化第一列
    for(int i=1; i<m; ++i)
        dp[i][0] = dp[i-1][0] + grid[i][0];
    // 填充辅助数组
    for(int i=1; i<m; ++i)
    {
        for(int j=1; j<n; ++j)
        {
            dp[i][j] = dp[i-1][j] < dp[i][j-1] ? dp[i-1][j] : dp[i][j-1];
            dp[i][j] += grid[i][j];
        }
    }
    return dp[m-1][n-1];
}

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    vector<vector<int>> vt;
    vector<int> temp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int t;
            cin>>t;
            temp.push_back(t);
        }
        vt.push_back(temp);
        temp.clear();

    }
    cout<<minPathSum(vt)<<endl;
    return 0;
}