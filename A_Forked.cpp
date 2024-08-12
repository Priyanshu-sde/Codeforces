#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD 10e7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    set<pair<int,int>> k,q;
    int x[4] = {-1,1,-1,1}, y[4] = {-1,-1,1,1};
    for(int i = 0 ; i < 4 ; i++ ){
        k.insert({xk + a*x[i],yk +b*y[i]});
        k.insert({xk + b*x[i],yk +a*y[i]});
        q.insert({xq + a*x[i],yq +b*y[i]});
        q.insert({xq + b*x[i],yq +a*y[i]});
    }
    int cnt = 0;
    for(auto it:k){
        if(q.find(it) != q.end()){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    }

    

}