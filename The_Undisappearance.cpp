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
        vector<int> a(n);
        vector<int> e(n,0);
        vector<int> d(n,0);
        vector<int> t(n,0);
        int el=n,er=0,dl=n,dr=0,tl=n,tr=0;
        for(int  i = 0;i < n;i++) {
            cin>>a[i];
            if(a[i] == 1)
            {
                e[i] = 1;
                er = i;
                if(el == n){
                    el = i;
                }
            }
           
            if(a[0]==2)
            {
                d[i] =1;
                dr = i;
                if(dl == n){
                    dl = i;
                }
            }
            
            if(a[i] == 3){
                t[i] = 1; 
                tr = i;
                if(tl == n){
                    tl = i;
                }
            } 
                      
            
           
        }
        ll cnt = 0LL;
        int se = el + 1,ee = n-er,fl = 1;
        for(int i = 0; i < n;i++){
            if(t[i]== 1 && i < el){
                se =el - i;
            }
            if(i >= el && i <= er && t[i] == 1){
                fl = 0;
                break;
            }
            if(t[i] == 1 && i > er){
                ee = i - er;
                break;
            }
        }
        cnt += (se)*(ee)*fl;
        se = dl + 1,ee = n-dr,fl = 1;
        for(int i = 0; i < n;i++){
            if(e[i]== 1 && i < dl){
                se =dl - i + 1;
            }
            if(i >= dl && i <= dr && e[i] == 1){
                fl = 0;
                break;
            }
            if(e[i] == 1 && i > dr){
                ee = i - dr;
                break;
            }
        }
        cnt += (se)*(ee)*fl;
        se = tl+ 1,ee = n-tr,fl = 1;
        for(int i = 0; i < n;i++){
            if(d[i]== 1 && i < tl){
                se =tl - i;
            }
            if(i >= tl && i <= tr && d[i] == 1){
                fl = 0;
                break;
            }
            if(d[i] == 1 && i > tr){
                ee = i - tr;
                break;
            }
        }
        cnt += (se)*(ee)*fl;
        ll ans = ((n*(n+1))/2) - cnt;
        cout<<ans<<endl;       

        
    }
    return 0;
}