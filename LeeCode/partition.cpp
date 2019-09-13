//
// Created by 13058 on 2019/9/9.
/*
 * 给定一个字符串s，分割s使得s的每一个子串都是回文串
 * 返回所有的回文分割结果
 *
 * 例如:给定字符串s="aab",
 * 返回[↵    ["aa","b"],↵    ["a","a","b"]↵  ]
 */
//
#include <iostream>
#include<vector>
using namespace std;
bool isPalindrome(string s){
    return s==string(s.rbegin(),s.rend());  //反向迭代器
}
void dfs(string s,vector<string> &cur,vector<vector<string>> &res){
    if (s==""){
        res.push_back(cur);
        return;
    }

    for (int i = 1; i <= s.length(); ++i) {
        string sub=s.substr(0,i);
        if (isPalindrome(sub)){
            cur.push_back(sub);
            dfs(s.substr(i,s.length()-i),cur,res);
            cur.pop_back();
        }
    }

}
vector<vector<string>> partition(string s) {
    vector<vector<string>> res;
    vector<string> cur;
    dfs(s,cur,res);
    return res;
}

int main()
{
    string s;
    vector<vector<string>>res;
    while (cin>>s)
    {
        res=partition(s);
        for (int i = 0; i <res.size() ; ++i) {
            for(auto x:res[i])
                cout<<x<<" ";
            cout<<endl;
        }
    }
    return 0;
}