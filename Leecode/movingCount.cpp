//
// Created by 13058 on 2019/8/14.
/*
 * 地上有一个m行和n列的方格。一个机器人从坐标0,0的格子开始移动，
 * 每一次只能向左，右，上，下四个方向移动一格，
 * 但是不能进入行坐标和列坐标的数位之和大于k的格子。
 * 例如，当k为18时，机器人能够进入方格（35,37），因为3+5+3+7 = 18。
 * 但是，它不能进入方格（35,38），因为3+5+3+8 = 19。请问该机器人能够达到多少个格子？
 */
//BFS

#include <iostream>
#include <queue>

using namespace std;
struct node
{
    int x;
    int y;
    node(int a,int b):x(a),y(b){}
};

bool judge(int x,int y,int threshold)//判断是否可以进入格子*****行坐标和列坐标的数位之和大于k的格子
{
    int sum=0;
    while(x>0)
    {
        sum+=x%10;
        x/=10;
    }
    while(y>0)
    {
        sum+=y%10;
        y/=10;
    }
    return (sum>threshold)? false:true;
}
int movingCount(int threshold, int rows, int cols)
{
    if(rows<=0||cols<=0||threshold<0)
        return 0;
    int move[4][2]={{0,1},{0,-1},{1,0},{-1,0}};//移动方向
    vector< vector<int> >flag;//构造访问数组
    for (int j = 0; j <rows ; ++j) {
        vector< int > t(cols,0);
        flag.push_back(t);
    }

    int x=0,y=0;//定义当前节点位置
    int count=0;//统计数目
    queue<node*> q;
    node* s=new node(x,y); //BFS
    q.push(s);
    flag[0][0]=1;
    while(!q.empty())
    {
        s=q.front();
        q.pop();
        count++;
        for (int i = 0; i <4 ; ++i) {
            x=s->x+move[i][0],y=s->y+move[i][1];
            if(x>=0&&x<rows&&y>=0&&y<cols&&flag[x][y]==0&&judge(x,y,threshold))
            {
                node* t=new node(x,y);
                q.push(t);
                flag[x][y]=1;//已访问
            }

        }
    }
    return count;
}
int main()
{
    cout<<movingCount(2, 3, 2);
    return 0;
}