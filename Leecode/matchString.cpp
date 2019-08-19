//
// Created by 13058 on 2019/8/14.
/*
 * 模式中的字符'.'表示任意一个字符，而'*'表示它前面的字符可以出现任意次（包含0次）。
 * 在本题中，匹配是指字符串的所有字符匹配整个模式。
 * 例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但是与"aa.a"和"ab*a"均不匹配
 */
//
#include <iostream>
using namespace std;
bool match(char* str, char* pattern)
{
    if(str=="")
    {
        int j=1;
        while(pattern[j]=='*')
        {
            if(pattern[j+1]=='\0')
                return true;
            if(pattern[j+2]=='\0')
                return false;
            j+=2;
        }
        return false;
    }
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]==pattern[j])
            i++,j++;
        else{
           if(pattern[j]=='.')
               i++,j++;
           else if(pattern[j]=='*')
           {
               if(pattern[j-1]!='.')
               {
                   while(str[i-1]==str[j-1]&&str[i-1]==str[i])
                       i++;
                   j++;
               } else{
                   if(pattern[j+1]=='\0')
                       return true;
                   else{
                       i++,j++;
                       while (str[i]!=pattern[j])
                           i++;
                   }
               }

           } else{
              if(pattern[j+1]=='*')
                  j+=2;
              else
                  return false;
           }
        }
    }
    return (pattern[j]=='\0')?true:false;
}
int main()
{
    cout<<match("\",",".*");
    return 0;
}
