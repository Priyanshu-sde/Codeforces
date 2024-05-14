#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int  k,w;
    cin>>k>>n>>w;
    if(k*(w*(w+1)/2) - n > 0)
    cout<<k*(w*(w+1)/2) - n<<endl;
    else
    cout<<0<<endl;
    return 0;
}