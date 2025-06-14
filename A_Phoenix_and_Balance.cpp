#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a = 0,b = 0;
        for(int i = 1;i <= n;i++){
            if(i == 1 || i == n) a += pow(2,i);
            else a -= pow(2,i);
        }
        if(n == 2 )cout<<2<<endl;
        else
        cout<<abs(a)<<endl;
    }
    return 0;
}