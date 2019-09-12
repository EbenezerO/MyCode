#include<iostream>
#include<vector>

using namespace std;

int fun(int n,int v,vector<int> weight,vector<int> price,vector<vector<int>> res){
    for(int i=1;i<=n;++i){
        for(int j=1;j<=v;++j){
            if(weight[i] > j)
                res[i][j] = res[i-1][j];
            else
                res[i][j] = max(res[i-1][j-weight[i]]+price[i],res[i-1][j]);
        }
    }
    return res[n][v];
}

int main(){
    int n,v;
    cin>>v;
    cin>>n;
    vector<int> weight(n+1,0);
    vector<int> price(n+1,0);
    vector<vector<int>> res(n+1,vector<int>(v+1,0));

    for(int i=1;i<=n;++i){
        cin>>weight[i];
    }
    for(int i=1;i<=n;++i){
        cin>>price[i];
    }

    int ans = fun(n,v,weight,price,res);
    cout<<ans<<endl;

    return 0;
}