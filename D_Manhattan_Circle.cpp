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
        int cnt,m,n;
        char c;
        cin>>n>>m;
        int max = 0;
        int f1 = 0,f2 = 0,tx,ty,x,y;
        fr(i,n){
            cnt =0;
             f1 = 0;
            fr(j,m){
                cin>>c;
                
                if(c=='#'){
                    cnt++;
                    if(f1 == 0){
                        tx = j+1;
                        ty = i +1;
                    }
                    f1 = 1;
                    f2 = 1;
                }
                
                
            }
            if(cnt > max){
                max = cnt;
                x = tx;
                y = ty;
            }
        }
        cout<<y<<" "<<x+max/2<<endl;
    }
    return 0;
}