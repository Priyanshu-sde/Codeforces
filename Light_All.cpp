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
        int n;
        cin>>n;
        string s;
        cin>>s;        
        vector<pair<int,int>> a(n);
        fr(i,n) {
            a[i].first = s[i];
            if(s[i] == '1')a[i].second = 0;
            else a[i].second = 3;
        }
        bool fl = true;
        fr(i,n){
            if(a[i].first == '0'){
                if(i > 0 && a[i-1].second == 0){
                    a[i-1].second = 1;
                }
                else if( i < n-1 && a[i+1].second == 0){
                    a[i+1].second = 2;
                }
                else {
                    fl = false;
                    break;
                }
            }
        }
        fl ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}