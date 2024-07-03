#include<bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    int m = min(a,b);
    vector<int> d;
    for(int i = 1;i <= m;i++){
        if((a%i==0) && (b%i==0)){
            d.push_back(i);
        }
    }
    cout<<d[d.size()-k]<<endl;
}