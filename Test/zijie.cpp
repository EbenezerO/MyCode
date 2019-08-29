//
// Created by 13058 on 2019/8/25.
/*
 * 群体数目；
 */
//
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int getK(vector<vector<int>> map)
{
    int n=map.size();
    vector<set<int>> res;
    set<int> t;
    res.push_back(t);
    for (int i = 1; i <n ; ++i) {
        for (int j = 0; j <i ; ++j) {
            if(map[i][j]>3)
            {
                t.insert(i);
                t.insert(j);
            }

        }
        res.push_back(t);
        t.clear();
    }
    for (int k = 0; k <n ; ++k) {
        if(!res[k].empty())
        {
            set<int>::iterator a=res[k].begin();
            for (; a!=res[k].end(); a++) {
                if(*a!=k&&!res[*a].empty())
                {
                    res[k].insert(res[*a].begin(),res[*a].end());
                    res[*a].clear();
                }

            }
        }
    }
    int s1=0,s2=0;//群体数目 ,这些群体所包含的个体数目

    for (int l = 0; l <n ; ++l) {
        if(!res[l].empty())
        {
            s1++;
            s2+=res[l].size();
        }
    }
    return s1+n-s2;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    vector<vector<int>> map;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < n; ++j) {
            int t;
            cin>>t;
            a.push_back(t);
        }
        map.push_back(a);
        a.clear();
    }
    cout<<getK(map)<<endl;
    return 0;
}
