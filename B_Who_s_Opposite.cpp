#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int a,b,c;
        cin>>a>>b>>c;
        if(2*abs(a-b) < c || abs(a-b) == 1|| 2*abs(a-b) < a|| 2*abs(a-b) < b)
        cout<<-1<<endl;
        else{
            if(abs(a-b) >= c)
            {
                cout<<c+abs(a-b)<<endl;
            }
            else
            cout<<c-abs(a-b)<<endl;
        }
    }

}