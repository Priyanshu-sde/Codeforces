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
        vector<pair<int,int>> a(n-1);
        fr(i,n-1){
            cin>>a[i].first>>a[i].second;
        }
        if(n==2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            fr(i,n-1){
                if(i < 2)cout<<a[i].first<<" "<<a[i].second<<endl;
                else if(i&1)cout<<a[i].second<<" "<<a[i].first<<endl;
                else cout<<a[i].first<<" "<<a[i].second<<endl;
            }
           
        }

    }
    return 0;
}