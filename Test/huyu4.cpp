//
// Created by 13058 on 2019/9/3.
/*
 * 信的每行只能容纳宽度为100的字符，也就是说如果写下某个字符会导致行宽超过100，那么就要另起一行书写
 * 信的内容由a-z的26个小写字母构成，而每个字母的宽度均会事先约定。例如字符宽度约定为[1,2,3,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5]，
 * 那么就代表'a'到'd'四个字母的宽度分别是1,2,3,4，而'e'到'z'的宽度均为5
 * 那么按照上述规则将给定内容S书写成一封信后，
 *
 * 输出：这封信共有几行？最后一行宽度是多少？
 */
//
#include <iostream>
using namespace std;

int main(){
    int num[26],i=0;
    for(i=0;i<26;i++){
        cin>>num[i];
    }
    string data;
    cin>>data;

    int len = data.length();
    int sum=0,count=1;
    for(i=0;i<len;i++){
        sum += num[data[i]-'a'];
        if(sum > 100){
            count++;
            sum = 0;
            sum += num[data[i]-'a'];
        }
    }
    cout<<count<<" "<<sum<<endl;
    return 0;
}