//
// Created by 13058 on 2019/8/25.
//
#include <iostream>
#include <vector>
using namespace std;
int ROW=4,COL=4;

vector<vector<int>> Process(vector<vector<int>> game,int direction)
{
    switch (direction)
    {
        case 1://shang
            //最上面一行不动
            for(int row = 1; row < ROW; ++row)
            {
                for(int crow = row; crow >= 1; --crow)
                {
                    for(int col = 0; col < COL; ++col)
                    {
                        //上一个格子为空
                        if(game[crow-1][col] == 0)
                        {
                            game[crow-1][col] = game[crow][col];
                            game[crow][col] = 0;
                        }
                        else
                        {
                            //合并
                            if(game[crow-1][col] == game[crow][col])
                            {
                                game[crow - 1][col] *= 2;
                                game[crow][col] = 0;
                            }

                        }
                    }
                }
            }
            break;
        case 2://xia
            //最下面一行不动
            for(int row = ROW - 2; row >= 0; --row)
            {
                for(int crow = row; crow < ROW - 1; ++crow)
                {
                    for(int col = 0; col < COL; ++col)
                    {
                        //上一个格子为空
                        if(game[crow + 1][col] == 0)
                        {
                            game[crow + 1][col] = game[crow][col];
                            game[crow][col] = 0;
                        }
                        else
                        {
                            //合并
                            if(game[crow + 1][col] == game[crow][col])
                            {
                                game[crow + 1][col] *= 2;
                                game[crow][col] = 0;
                            }

                        }
                    }
                }
            }
            break;
        case 3://zuo
            //最左边一列不动
            for(int  col = 1; col < COL; ++col)
            {
                for(int ccol = col; ccol >= 1; --ccol)
                {
                    for(int row = 0; row < ROW; ++row)
                    {
                        //上一个格子为空
                        if(game[row][ccol-1] == 0)
                        {
                            game[row][ccol - 1] = game[row][ccol];
                            game[row][ccol] = 0;
                        }
                        else
                        {
                            //合并
                            if(game[row][ccol - 1] == game[row][ccol])
                            {
                                game[row][ccol - 1] *= 2;
                                game[row][ccol] = 0;
                            }

                        }
                    }
                }
            }
            break;
        case 4://you
            //最右边一列不动
            for(int  col = COL - 2; col >= 0; --col)
            {
                for(int ccol = col; ccol <= COL - 2; ++ccol)
                {
                    for(int row = 0; row < ROW; ++row)
                    {
                        //上一个格子为空
                        if(game[row][ccol + 1] == 0)
                        {
                            game[row][ccol + 1] = game[row][ccol];
                            game[row][ccol] = 0;
                        }
                        else
                        {
                            //合并
                            if(game[row][ccol + 1] == game[row][ccol])
                            {
                                game[row][ccol + 1] *= 2;
                                game[row][ccol] = 0;
                            }

                        }
                    }
                }
            }
            break;
    }
    return game;

}


int main()
{
    int n;
    cin>>n;
    vector<int> a;
    vector<vector<int>> map;
    for (int i = 0; i <4 ; ++i) {
        for (int j = 0; j < 4; ++j) {
            int t;
            cin>>t;
            a.push_back(t);
        }
        map.push_back(a);
        a.clear();
    }
    vector<vector<int>> res=Process(map,n);

    for (int k = 0; k < 4; ++k) {
        for (int i = 0; i <4 ; ++i) {
            if(i==3)
                cout<<res[k][i]<<endl;
            else
                cout<<res[k][i]<<" ";
        }
    }

    return 0;
}

