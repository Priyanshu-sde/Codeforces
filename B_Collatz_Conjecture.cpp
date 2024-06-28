#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        while(k > 0){
            if((x+1)%y == 0){
                x++;
                while(x%y == 0){
                    x = x/y;
                }
                k--;
            }
            else{
                if(k - (y-x%y) >= 0){
                    k = k - (y-x%y);
                    x += y-x%y;
                    while(x%y == 0){
                    x = x/y;
                }

                }
                else{
                    x += k;
                    k = 0;
                }
            }
        } 
        cout<<x<<endl;      
    }
    return 0;
}