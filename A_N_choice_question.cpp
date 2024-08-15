#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    a += b;
    int i = 1;
    while(n--){
        cin>>b;
        if(a==b){
            cout<<i<<endl;
        }
        i++;
    }

}