#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i = 0;i < 5;i++){
            if(a==min(min(a,b),c)){
                a++;
            }
            else if(b==min(min(a,b),c)){
                b++;
            }
            else{
                c++;
            }

        }
        cout<<a*b*c<<endl;
    }

}