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
        int n,k,x;
        cin>>n>>k>>x;
        if(x==1){
            if((k==2  && n%2 == 1) || k == 1 || n == 1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                if(n%2) {
                    cout<<n/2<<endl;
                    for(int i = 0 ; i < n/2 -1;i++){
                        cout<<"2 ";
                    }
                    cout<<"3 "<<endl;
                }     
                else{
                    cout<<n/2<<endl;
                    for(int i = 0 ; i < n/2;i++){
                        cout<<"2 ";
                    }
                    cout<<endl;
                }          
            }
        
        }
        else{
            cout<<"YES"<<endl;
            cout<<n<<endl;
            while(n--){
                cout<<"1 ";
            }
            cout<<endl;

        }
    }
    return 0;
}