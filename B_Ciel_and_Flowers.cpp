#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ll r,g,b;
    cin>>r>>g>>b;
    if(min(r%3,min(g%3,b%3)) == 0 && (r%3 +b%3 +g%3) == 4 && min(r,min(g,b)) != 0){
        cout<<(r/3 + g/3 + b/3 +min(r%3,min(g%3,b%3))) + 1<<endl;

    }
    else
    cout<<(r/3 + g/3 + b/3 +min(r%3,min(g%3,b%3)))<<endl;

    return 0;
}