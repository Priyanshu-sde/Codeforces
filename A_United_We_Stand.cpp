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
        vector<ll> b;
        vector<ll> c;
        fr(i,n) cin>>a[i];
        int ma = *max_element(all(a));
        for(int i = 0; i< n;i++){
            if(a[i] == ma) c.push_back(a[i]);
            else b.push_back(a[i]);
        }
        if(b.size() == 0) {
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i = 0; i < b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i = 0; i < c.size(); i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}