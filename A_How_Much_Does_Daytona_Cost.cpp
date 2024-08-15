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
        int n,k,a;
        cin>>n>>k;
        int fl = 0;
        for(int i = 0;i < n;i++){
            cin>>a;
            if(k == a)
            fl = 1;
        }
        cout<<(fl?"YES":"NO")<<endl;
        
    }
    return 0;
}