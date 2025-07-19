#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);
        vector<int> d(n);
        long long ops = 0LL;
        long long ops2 = 0LL;
        for(int i = 0 ;i < n;i++){
            cin>>a[i]>>b[i]>>c[i]>>d[i];

            ops += abs(a[i] - c[i]);
            if(b[i] - d[i] > 0){
                ops2 +=  abs(b[i] - d[i]);
                ops2 += min(c[i],a[i]);
            }
        }
        cout<<ops/2 + ops2<<endl;




    }
    return 0;
}