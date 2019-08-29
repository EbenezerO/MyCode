//
// Created by 13058 on 2019/8/25.
/*
 * 无重复字符的最长字串
 *
 */
//
#include <iostream>
#include <set>
#include <vector>

using namespace std;
string lengthOfLongestSubstring(string s) {
    set<char> t;
    int res = 0, left = 0, right = 0;
    vector<string> o;
    string temp="";
    while (right < s.size()) {
        if (t.find(s[right]) == t.end()) {
            temp+=s[right];
            t.insert(s[right++]);
            res = max(res, (int)t.size());
        }  else {
            o.push_back(temp);
            t.erase(s[left++]);
            temp=temp.substr(1,temp.size()-1);
        }
    }
    o.push_back(temp);
    for (int i = 0; i <o.size() ; ++i) {
        if(o[i].size()==res)
            return o[i];
    }

}

int main()
{
    string a;
    while (cin>>a)
        cout<<lengthOfLongestSubstring(a)<<endl;
    return 0;
}
