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
        ll a[n];
        int ma = 0;
        map<int,int> mp;
        map<int,int> prefixmp;
        fr(i,n) {
            cin>>a[i];
            mp[a[i]]++;
            if(a[ma] < a[i]){
                ma = i;
            }
        }
        int cn = 0;
        for(auto it = mp.rbegin(); it != mp.rend(); ++it){
            cn += it.second;
            prefixmp[it.first] = cn;
        }
    
        int ans = 0, ans1 = 0;
        for(int i =0;i < n;i++){
            for(int j = i+1;j < n;j++){
                if(ma != j && ma != i && a[ma] < a[i] + a[j]){

                    ans += n -2 - prefixmp[a[ma] - min(a[i],a)];
                }
            }
        }
        if(ans > 0)
        cout<<ans*(n-2)<<endl;
        else
        cout<<0<<endl;
    }
    return 0;
}