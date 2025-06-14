#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    ll s = 0,e = 1000;
    string str;
    while(e > s){
        ll mid = (s+e)/2;
        cout<<"?"<<mid<<endl;
        cin>>str;
        if(str == "N") e = mid - 1;
        else s = mid + 1;
    }
    cout<<"!"<<(s+e)/2<<endl;

    return 0;
}