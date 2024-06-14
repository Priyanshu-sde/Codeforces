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
        int fl = 1;
        while(n%10==0){
            n /= 10;
        }
        while(n%11==0){
            n /= 11;
        }
        while(n>0){
            if(n%10 == 0 || n%10 == 1){
                n /= 10;
                fl = 0
            }
            else
            fl = 0;
        }
        if(fl)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}