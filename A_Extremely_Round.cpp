#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt = -1;
        int a = n;
        while(n > 0){
            cnt++;
            n /= 10;
        }
        cout<<(int)(cnt*9 + a/pow(10,cnt))<<endl;
    }
    return 0;
}