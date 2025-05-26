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
        int n,k;
        cin>>n>>k;
        ll a[n];
        fr(i,n) {
            cin>>a[i];       
        }
        int fl = 5;
        if(k == 2){
            fl = 1;
            for(int i = 0;i < n;i++){
                if((a[i])%2 == 0){
                    fl = 0;
                    break;
                }
            }
            cout<<fl<<endl;
        }
        else if(k == 3){
            for(int i = 0;i < n;i++){
                if(a[i]%3 == 0){
                    fl = 0;
                    break;
                }
                else if(a[i]%3 == 2){
                    fl = 1;                    
                }
                else{
                    fl = min(fl,2);
                }
            }
            cout<<fl<<endl;
        }
        else if(k == 4){
            for(int i = 0;i < n;i++){
                if(a[i]%4 == 0){
                    fl = 0;
                    break;
                }
                else if(a[i]%4 == 3){
                    fl = 1;                    
                }
                else if(a[i]%4 == 2){
                    fl = min(fl,2);
                }
                else{
                    fl = min(fl,3);
                }
            }
            int fl1=0,fl2 = 0;
            for(int i = 0;i < n;i++){
                if(a[i]&1){
                    fl1 ++;
                }
                if(fl1 > 1){
                    break;
                }
            }
            for(int i = 0;i < n;i++){
                if((a[i])%2 == 0){
                    fl2++;
                }
                if(fl2 > 1){
                    break;
                }
                
            }
            fl = min(fl,min(fl1,2-fl2));
            cout<<fl<<endl;
        }
        else{
            for(int i = 0;i < n;i++){
                if(a[i]%5 == 0){
                    fl = 0;
                    break;
                }
                else if(a[i]%5 == 4){
                    fl = 1;                    
                }
                else if(a[i]%5 == 3){
                    fl = min(fl,2);
                }
                else if(a[i]%5 == 2){
                    fl = min(fl,3);
                }
                else{
                    fl = min(fl,4);
                }
            }
            cout<<fl<<endl;
        }
        
    }
    return 0;
}