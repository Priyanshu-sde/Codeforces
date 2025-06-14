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
        int n,k;
        cin>>n>>k;
        for(int i = 0;i < n;i++){
            if(i < k)cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}