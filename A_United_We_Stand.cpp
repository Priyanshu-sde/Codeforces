#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        fr(i,n) cin>>a[i];
        vector<ll> b;
        vector<ll> c;        
        
        int min = INT_MAX;
        fr(i,n){
            if(a[i] != 1&& a[i] < min)
            min = a[i];
        }
        fr(i,n){
            if(a[i]%min == 0){
                c.push_back(a[i]);
            }
            else{
                b.push_back(a[i]);
            }
        }
        if(c.size() == 0|| b.size()==0){
            cout<<-1<<endl;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            fr(i,b.size()) cout<<b[i]<<" ";
            cout<<endl;
            fr(i,c.size()) cout<<c[i]<<" "; 
            cout<<endl;           
        }
    }
    return 0;
}