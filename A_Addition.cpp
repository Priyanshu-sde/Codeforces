#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc,a,ct=0;
    cin>>tc;
    while(tc--){
        cin>>a;
        if(a%2)
        ct++;
    }
    ct%2?cout<<"NO"<<endl:cout<<"YES"<<endl;
}