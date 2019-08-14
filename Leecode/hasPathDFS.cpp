//
// Created by 13058 on 2019/8/14.
/*
 * 判断在一个矩阵中是否存在一条包含某字符串所有字符的路径。
 * 路径可以从矩阵中的任意一个格子开始，每一步可以在矩阵中向左，向右，向上，向下移动一个格子。
 * 如果一条路径经过了矩阵中的某一个格子，则该路径不能再进入该格子。
 * 例如 a b c e s f c s a d e e 矩阵中包含一条字符串"bccced"的路径，但是矩阵中不包含"abcb"路径，
 * 因为字符串的第一个字符b占据了矩阵中的第一行第二个格子之后，路径不能再次进入该格子。
 *
 * DFS 1、递归 2、stack
 */
//
#include <iostream>
#include <queue>
using namespace std;

bool DFS(vector<bool> flags,char *matrix, int rows, int cols, char *str, int x, int y, int c) {
    if(x<0 || x>=rows || y<0 || y>=cols) //越界的点
        return false;
    if( matrix[x*cols+y]== str[c]  &&  flags[x*cols+y]== false )
    {
        flags[x*cols+y]=true;

        if(str[c+1]=='\0')  // 字符串结尾了（最后一个满足的）
            return true;

        bool condition =(DFS(flags,matrix,rows,cols,str,x,y+1,c+1) ||
                        DFS(flags,matrix,rows,cols,str,x,y-1,c+1) ||
                        DFS(flags,matrix,rows,cols,str,x+1,y,c+1) ||
                        DFS(flags,matrix,rows,cols,str,x-1,y,c+1) );
        if(condition == false)
            flags[x*cols+y]= false;
        return condition;
    }
    else
        return false;

}

bool hasPath(char* matrix, int rows, int cols, char* str)
{
    if(rows<=0||cols<=0||matrix=="")
        return false;
    vector<bool> flag(rows*cols, false);
    bool res= false;
    for (int i = 0; i <rows ; ++i) {
        for (int j = 0; j < cols; ++j) {
            if(res==true)
                break;
            if(str[0]==matrix[i*cols+j])
                res=DFS(flag,matrix,rows,cols,str,i,j,0);

        }
    }
    return res;
}

int main()
{
    cout<<hasPath("abcesfcsadee", 3, 4,"abcced");
    return 0;
}
