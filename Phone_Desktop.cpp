#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int ans = (y+1)/2;
        int one = x - 7*ans - 4*(y%2); 
        if(7*ans >= x )
        cout<<ans<<endl;
        else        
        cout<<ans + (one + 14)/15<<endl;       

    }
    return 0;
}