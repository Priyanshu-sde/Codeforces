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
        int b = 0,a,cnt = 0;
        while(n--){
            cin>>a;
            if(!a){
                cnt++;
                b = max(b,cnt);
            }
            else{
                cnt = 0;
            }

        }
        cout<<b<<endl;
    }
    
    return 0;
}