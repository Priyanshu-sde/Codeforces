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
        bool isbeu = false;
        for(int i =0;i < n;i++){
            cin>>a[i];
            if(i > 0 && abs(a[i-1] - a[i]) <= 1) isbeu = true;
        }
        if(isbeu){
            cout<<0<<endl;
            continue;
        }
        int ans = INT_MAX;
        int mi = 0,ma = 0;
        bool fl =  true;
        
        for(int i = 0;i < n;i++){
            fl =  true;
            if(a[mi] > a[i]){
                mi = i;
                fl = false;
            }
            if(a[ma] < a[i]){
                ma = i;
                fl = false;
            }
            if(fl && i != 0){                    
                ans = min(abs(i-min(ma,mi)),ans);
            }
        }
        mi = n-1;
        ma = n-1;
        for(int i = n-1;i >= 0;i--){
            fl =  true;
            if(a[mi] > a[i]){
                mi = i;
                fl = false;
            }
            if(a[ma] < a[i]){
                ma = i;
                fl = false;
            }
            if(fl && i != n-1){                     
                ans = min(abs(i-max(ma,mi)),ans);
            }
        }
        if(ans == INT_MAX)cout<<-1<<endl;
        else cout<<ans - 1<<endl;
    }
    return 0;
}