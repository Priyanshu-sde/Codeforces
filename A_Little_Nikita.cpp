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
        int n,m;
        cin>>n>>m;
        if(n<m)
        cout<<"NO"<<endl;
        else if((n-m)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;

        }
    }
    return 0;
}