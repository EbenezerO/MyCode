//
// Created by 13058 on 2019/9/8.
/*
 * 2
10_123_50_A0 1566918054
10_123_50_A1 1566918054
10_123_50_A1 1566918055
10_123_50_A3 1566918055
10_123_50_A4 1566918056
 */
//

#include <iostream>
#include <map>
using namespace std;
int main()
{
    int size;
    cin>>size;
    map<string,int> time;

    map<string,int> mp;
    string a;
    int b,count=0;
    while (cin>>a>>b)
    {
        if(size<=0)
        {
            cout<<a<<" "<<b<<endl;
            continue;
        }
        if(size>mp.size())
        {
            if(mp.find(a)!=mp.end())
            {
                if(mp[a]<b)
                {
                    mp[a]=b;
                    time[a]=count;
                    count++;
                }
            }
            else
            {
                mp[a]=b;
                time[a]=count;
                count++;
            }
        }
        else if(size==mp.size())
        {
            if(mp.find(a)!=mp.end())
            {
                if(mp[a]<b)
                {
                    mp[a]=b;
                    time[a]=count;
                    count++;
                }
            }
            else
            {
                int min=100000;
                map<string,int>::iterator it=time.begin();
                for (; it!=time.end() ;it++) {
                    if(it->second<min)
                        min=it->second;
                }
                string min1;
                map<string,int>::iterator it1=time.begin();
                for (; it1!=time.end() ;it1++) {
                    if(it1->second==min)
                    {
                        min1=it1->first;
                        break;
                    }
                }
                cout<<min1<<" "<<mp.find(min1)->second<<endl;
                mp.erase(mp.find(min1));
                time.erase(time.find(min1));
                mp[a]=b;
                time[a]=count;
                count++;
            }

        }

    }
    return 0;
}