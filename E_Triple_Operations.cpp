#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int l,r;
        cin>>   r;
        ll cnt = 0LL;
        int a = l;
        while(a > 0){
            a /= 3;
            cnt += 2LL;
        }
        int d = cnt/2;
        int c = pow(3,d);
        for(int i = l+1;i <= r;i++){
            if(i < c){
                cnt += d;
            }
            else{
                d++;
                c = pow(3,d);
                cnt += d;
            }
        }
        cout<<cnt<<endl;
    }

}