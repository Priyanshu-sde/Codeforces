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
        vector<ll> a(n+1);
        for(int i = 1; i <= n;i++) cin>>a[i];
        string s;
        cin>>s;
        vector<ll> b(n,0);
        int  i = 1,j = -1,cnt = 0;
        while(i <= n){
            if(a[i] == i || j == i){
                i++;
                while(b[i-1] == 1 && i <= n){
                    i++;
                }
            }
            else{                          
                
                if(s[i-1] == '0') {
                    cnt++;
                    b[i-1]++;
                }
                if(j == -1){
                    j = i;
                }
                i = a[i];

            }
        }
        for(int k = 0;k < n;k++){
            if(b[k] == 1) b[k] = cnt;
            
        }
        for(int k = 1;k <= n;k++){
            if(a[k] == k) b[k-1] = 1;
        }
        for(int k = 0;k < n;k++){
            cout<<b[k]<<" ";
        }
        cout<<endl;


    }
    return 0;
}