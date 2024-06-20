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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+b)/2 + (c+b)/2 >= (c+d)/2)
        cout<<(a+b)/2<<" "<<(c+b)/2<<" "<<(c+d)/2<<endl;
        else if( (c+b)/2 -(c+d)/2 <=  (a+b)/2  )
        
    }
    return 0;
}