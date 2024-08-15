#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,q,c,d = 0;
    cin>>n>>q;
    vector<long long> a(n+1);
    a[0]=0;
    for(int i = 1 ;i <= n;i++){
        cin>>c;
        d+=c;
        a[i]=d;
    }
    while(q--){
        long long l,r;
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<endl;
    }
}ṅṭūñṁṁṁṁ