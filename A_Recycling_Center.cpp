#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
#define MOD = 10e7;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr + n);

        int index = n- 1;
        for(int i=0;i<n; i++){
            if(arr[i] > c){
                index = i-1;
                break;
            }
        }
        int must = n - index - 1;
        int extra = 0;
        int sec = 1;
        int i = index;
        int time = 1;
        while(i>=0){
            if(arr[i]*time <= c){    
                time = 2*time;
            } 
            else{
                extra = extra + 1;   
            }
            i--;
        }
        cout<<must+extra<<endl;
    }

}