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
        string s;
        cin>>s;
        int n = s.length();
        int cnt0 = 0;
        for(int i = 0;i < n;i++){
            if(s[i] == '0') cnt0++;
        }
        int ans = n;
        int cnt1 = n - cnt0;
        for( int i = 0;i < n;i++){
            if(s[i] == '1'){
                if(cnt0 > 0){
                    cnt0--;
                }
                else{
                    ans = i;
                    break;
                }
            }
            else{
                if(cnt1 > 0){
                    cnt1--;
                }
                else{
                    ans = i;
                    break;
                }
            }
        }        
        cout<<n-ans<<endl;
    }
    return 0;
}