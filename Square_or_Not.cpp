#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int fl = 0;
        int w = 1;
        while(w*w <= n){
            if(w*w == n){
                fl = 1;
                break;
            }
            else{
                w++;
            }
        }
        for(int i = 0; i < w;i++){
            if(fl == 0){
                break;
            }
            for(int j = 0; j < w;j++){
                if(i == 0 || i == w-1){
                    if(s[i*w + j] != '1'){
                            fl = 0;
                            break;
                    }
                }
                else if(j == 0 || j == w-1){
                    if(s[i*w + j] != '1'){
                            fl = 0;
                            break;
                    }
                }
                else{
                    if(s[i*w + j] != '0'){
                        fl = 0;
                        break;
                    }
                }
            }
        }
        if(fl == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}