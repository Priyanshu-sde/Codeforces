#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        fr(i,100){
            if(pow(2,i) <= r){
                continue;
            }
            else{
                cout<<i-1<<endl;
                break;
            }
        }
    }
    return 0;
}