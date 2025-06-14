#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()



int main(){
    int n;
    cin>>n;
    int a[n];
    fr(i,n) cin>>a[i];
    int op = 0;
    int l = 0, r = n -1,d = INT_MAX;
    while(*max_element(a,a+n) != 0){
        for(int i = 0;i < n;i++){
            if(a[i] == 0 ){
                for(int j = l;j < i;j++){
                    a[j] -= d;
                }
                op++;
                l = i + 1;
                if(i + 1 < n)d= a[i+1];
            }
            else if(i == n -1){
                for(int j = l;j <= i;j++){
                    a[j] -= d;
                }
                op++;
            }
            else{
                d = min(a[i],d);
            }
            
        }
    }
    cout<<op<<endl;

    return 0;
}