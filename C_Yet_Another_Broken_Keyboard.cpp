#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int> av;
    char a;
    for(int i = 0;i < k;i++){
        cin>>a;
        av[a]++;
    }
    ll ans =  0,cnt = 0;
    for(int i = 0;i < n;i++){
        if(av[s[i]] != 0){
            cnt++;
        }
        else{
            ans += cnt*(cnt+1)/2;
            cnt = 0;
        }
    }
    ans += cnt*(cnt+1)/2;
    cout<<ans<<"\n";
    return 0;
}