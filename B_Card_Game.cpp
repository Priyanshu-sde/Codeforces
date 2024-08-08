#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int win  = 0;
        if((a > c && b > d) || (a >= c && b > d) || (a > c && b >= d)){
            win+=2;
        }
        if((a>d && b > c) || (a>=d && b > c) || (a>d && b >= c))
        win+=2;
        cout<<win<<endl;
    }

}