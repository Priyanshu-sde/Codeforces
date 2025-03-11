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
        int m;
        cin>>m;
        int n = m;
        int fl = -1;
        if(n < 5){
            cout<<-1<<endl;
            continue;
        }
        while((n&1) == 1){
            n /= 2;
            fl ++;
        }
        n = m - pow(2,fl+1) + 1;
        fl = -1;
        while((n&1) == 0){
            fl++;
            n /= 2;
        }
        cout<<m-(1<<fl)<<endl;

    }
    return 0;
}