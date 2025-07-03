#include<iostream>
#include<vector>
using namespace std;

// test 

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        long long arr[n];
        for(int i = 0; i < n;i++){
            cin>>arr[i];
        }
        int f = 1;
        if(k>1){
            cout<<"YES"<<endl;
            continue;
        }
        
        else {
            for(int i = 0;i<n;i++){
                if(arr[i] < arr[i-1]){
                    cout<<"NO"<<endl;
                    f = 0;
                    break;
                }
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        

    }
    
}