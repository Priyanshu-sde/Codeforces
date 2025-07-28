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
        fr(i,n) cin>>a[i];
        int s = 0,e = n-1;
        bool inc = true;
        string ans = "";
        while(s <= e){
            if(s == e){
                ans+="R";
                break;
            }
            if(inc){
                if(a[s] < a[e]){
                    ans +="RL";
                    s++;
                    e--;
                }
                else{
                    ans += "LR";
                    s++;
                    e--;
                }
                inc = false;
            } else {
                if(a[s] > a[e]){
                    ans +="RL";
                    s++;
                    e--;
                }
                else{
                    ans += "LR";
                    s++;
                    e--;
                }
                inc = true;
            }
        }

        
        cout<<ans<<endl;
    }
    return 0;
}