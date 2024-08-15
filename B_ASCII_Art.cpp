#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;

int main(){
    int h,w,a;
    char c;
    cin>>h>>w;
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            cin>>a;
            if(!(a))
            cout<<".";
            else{
            c = a + 64;
            cout<<c;}
        }
        cout<<endl;
    }

}