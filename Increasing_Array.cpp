#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans = 0;
    vector<int> a(n);
    cin>>a[0];
    for(int i = 1 ;i < n;i++){
        cin>>a[i];
        if(a[i-1]>a[i]){
            ans+=a[i-1]-a[i];
            a[i] = a[i-1];
        }
    }
    cout<<ans<<endl;
}