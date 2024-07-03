#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        long long x,y;
        cin>>y>>x;
        long long ans = 0;
        if(x >= y){
            ans += (x-1)*(x-1);
            
            if(x%2){
                ans+=x;
                ans+=(x-y);
            }
            else{
                ans += y ;
            }
        }
        else{
            ans += (y-1)*(y-1);
            if(y%2){
                ans += x;
            }
            else{
                ans += y;
                ans += (y-x);
            }
        }
        cout<<ans<<endl;
        
    }
}