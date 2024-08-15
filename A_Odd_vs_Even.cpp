#include<bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        if(n==2){
            cout<<"Same"<<endl;
        }
        else if(n%2){
            cout<<"Odd"<<endl;
        }
        else{
            cout<<"Even"<<endl;
        }
    }
}