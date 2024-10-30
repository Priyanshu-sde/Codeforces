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
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        for(int i = 0;i < n/2;i++){
            int o = 0,c = 0;
            bool is;
            if(a[i] == a[i-1] && i != 0) o++;
            if(a[i] == a[i+1] && i+1 != n-i-2) o++;
            swap(a[i],a[n-1-i]);
            if(a[n-1-i] == a[n-i] && i != 0) c++;
            if(a[n-1-i] == a[n-i-2] && i+1 != n-i-2) c++;
            if(c < o) is = true;
            else is = false;

            if(!is) swap(a[i],a[n-1-i]);
        }
        int cnt = 0;
        for(int i = 0; i < n-1;i++){
            if(a[i] == a[i+1]) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}