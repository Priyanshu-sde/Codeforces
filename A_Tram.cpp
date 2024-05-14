#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int an = 0,ans = 0;
    int a,b;
    while(n--){
        cin>>a>>b;
        an += b - a;
        if(an > ans)
        ans = an; 
    }
    cout<<ans<<endl;
    return 0;
}