#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

bool isPowerOfTwo(int x) {
    return (x & (x - 1)) == 0;
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        int n = m;
        int fl = -1;
        if(n < 5){
            cout<<-1<<endl;
            continue;
        }
        fl = __builtin_ctz(~m);
        n = m - pow(2,fl) + 1;
        if(n == 0|| isPowerOfTwo(m)){
            cout<<-1<<endl;
            continue;
        }

        fl = __builtin_ctz(n);
        cout<<m-(1<<(fl-1))<<endl;

    }
    return 0;
}