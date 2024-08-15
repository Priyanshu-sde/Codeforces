#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int fl = 0;
        cin>>s;
        if(s[0] == '2'){
            fl = 1;
            if(s[1] > '1')
            cout<<1<<s[1]-'2';
            else if(s[1] == '1')
            cout<<"09";
            else
            cout<<"08";
        }
        else if(s[0] == '1' && s[1] > '2'){
            fl = 1;
            cout<<0<<s[1]-'2';
        }
        else{
            if(s[0] == '0' && s[1] == '0'){
                cout<<"12";
            }
            else
            cout<<s[0]<<s[1];

        }
        if(s[0] == '1' && s[1] == '2'){
            fl =1;

        }
        cout<<":"<<s[3]<<s[4]<<" ";
        if(fl)
        cout<<"PM"<<endl;
        else
        cout<<"AM"<<endl;

    }
    return 0;
}