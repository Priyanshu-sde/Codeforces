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
    int n,l,r;
    cin>>n>>l>>r;
    string s;
    cin>>s;
    bool fl = true;
    for(int i = l-1;i < r;i++){
        if(s[i] != 'o'){
            fl  = false;
        }
    }
    cout<<(fl ? "Yes" : "No")<<endl;

    return 0;
}