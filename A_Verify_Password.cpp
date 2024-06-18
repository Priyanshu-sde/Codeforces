#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int fl = 0;
        fr(i,n-1){
            if(s[i] > s[i+1]){
                fl=1;
                break;
            }
        }
        if(fl)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

            }
    return 0;
}