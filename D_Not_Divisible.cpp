#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

vector<vector<int>> divisors(100000);

void pre() {
    for(int i = 0;i < 100000;i++){
        for(int j = i;j < 100000;j += i){
            divisors[j].push_back(i);
        }
    }
}



int main(){
    pre();
    int n;
    cin>>n;
    ll arr[n];
    map<int,int> mp;
    fr(i,n){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int ans = 0;

    for(int i = 0;i < n;i++){
        if(mp[arr[i]] == 1){
            int div_found = 0;
            for(auto div: divisors[arr[i]]){
                if(mp[div] > 0){
                    div_found = 1;
                    break;
                }
            }
            if(!div_found){
                ans++;
            }
        }
    }
    cout<<ans<<endl;

    
    return 0;
}