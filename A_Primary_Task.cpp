#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD 10e7;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin>>tc;
    while(tc--){
        string a;
        cin>>a;
        if(a[0] == '1' && a[1] == '0'){
            int fl = 0,w = 0;
            if(a[2] == '0'){
                cout<<"NO"<<endl;
                continue;;
            }
            if( a[2] == '1'){
                fl = 0;
                if(a.size() > 3){
                    cout<<"YES"<<endl;
                    continue;
                }
                else{
                    cout<<"NO"<<endl;
                continue;
                }
            }
            for(int i = 2+w; i< a.size();i++){
                if(a[i] != '0'){
                    fl = 1;
                    break;
                }
            }
            
            if(fl)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}