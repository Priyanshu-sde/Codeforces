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
        int n,x;
        cin>>n>>x;
        ll a, sum = 0,maxsum = 0,minsum = 0;
        for(int i = 0 ;i < n;i++){
            cin>>a;
            sum += a;
            maxsum += (a/x);
            if(a%x != 0)
            maxsum++;
        }
        minsum = (sum/x);
        if(sum % x != 0)
        minsum++;
        cout<<minsum<<" "<<maxsum<<endl;
        

    }
}