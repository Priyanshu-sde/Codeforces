#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int n,q,c,d;
    cin>>n>>q;
    map<int,int> a;
    while(q--){
        cin>>c>>d;
        if(c == 1)
        a[d]++;
        else if(c == 2){
            a[d] = 2;
        }
        else{
            if(a[d] < 2)
            cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;
        }
    }

}