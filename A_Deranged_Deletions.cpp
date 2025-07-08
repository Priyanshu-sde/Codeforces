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
        int a[n];
        fr(i,n){
            cin>>a[i];
        }
        int fl = 0;
        int ma = a[0];
        for(int i = 1;i < n;i++){
            if(ma > a[i]){
                fl = i;
                break;
            }
            ma = max(ma,a[i]);
        }
        cout<<(fl ? "YES" : "NO")<<endl;
        if(fl){
            cout<<2<<endl;
            cout<<ma<<" "<<a[fl]<<endl;
        }
        
    }
    return 0;
}