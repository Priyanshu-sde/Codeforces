#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        bool fl =true, pu = false;
        fr(i,n){
            cin>>a[i];
            if(a[i] == 1){
                if(pu == false) {
                    pu = true;
                }
                if(x <= 0) fl = false;
                
            }
            if(pu) x--;
        }
        fl ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}