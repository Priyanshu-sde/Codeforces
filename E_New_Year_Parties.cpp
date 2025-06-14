#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int n,a;
    cin>>n;
    map<int,int> mp;
    fr(i,n) {
        cin>>a;
        mp[a]++;
    }
    for(int i = 0;i < n;i++){
        if(mp[i] == 0){
            if(mp[i+1] >= 1) {
                mp[i+1]--;
                mp[i]++;
            }
        }
        else if(mp[i] > 1){
            if(mp[i+1] <= 1){
                mp[i+1]++;
                mp[i]--;
            }
        }
    }
    int ma = 0;
    for(int i = 0;i <= n;i++){
        if(mp[i] >= 1) {
            ma++;
        }
    }
    cout<<ma<<endl;
    
    return 0;
}