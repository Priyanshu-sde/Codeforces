#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD 10e7;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin>>tc;
    while(tc--){
        int a,b,n,d;
        cin>>a>>b>>n;
        ll sum = b;
        for(int i = 0 ;i < n;i++){
            cin>>d;
            if(d >= a){
                sum+=a-1;
            }
            else{
                sum+=d;
            }
        }
        cout<<sum<<endl;


    }
}