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
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b&&b<c)
        cout<<"STAIR"<<endl;
        else if(a<b&&b>c)
        cout<<"PEAK"<<endl;
        else
        cout<<"NONE"<<endl;
    }
    return 0;
}