#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int a = 0;
        for(int i=0;i<n ;i++){
            cin>>arr[i];
            if(arr[i]==2){
                a++;
            }
        } 
        int b = 0;  
        int ans = 0;     
        for(int i =0;i<n;i++){
            if(arr[i] == 2){
                b++;
            }
            if(b == a/2){
                ans = i + 1;
                break;
            }

        }
        if(a%2){
            cout<<"-1"<<endl;            
        }
        else{
            cout<<ans<<endl;
        }
        

    }
    return 0;
}