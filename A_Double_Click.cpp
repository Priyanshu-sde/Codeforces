#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int n,d;
    cin>>n>>d;
    int a,b;
    cin>>a;
    while(n--){
        cin>>b;
        if(b-a<=d){
            cout<<b<<endl;
            break;
        }
        else if( n == 0){
            cout<<-1<<endl;
        }
        a = b;
    }

}