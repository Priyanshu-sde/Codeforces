#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    long long ans = 0;
    int i = 1;
    while(pow(5,i) <= tc){
        ans += tc/pow(5,i);
        i++;
    }
    cout<<ans<<endl;
}