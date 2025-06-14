#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans  = 0;
    for(int i =1;i< n;i++){
        if(s[i-1] == s[i]){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}