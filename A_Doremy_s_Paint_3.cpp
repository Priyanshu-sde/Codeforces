#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        int a = 0;
        for(int i = 0;i < n;i++){
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        int flag = 0,p=arr[n-1]-arr[0];

        for(int i = 0;i < n/2;i++){
            if(arr[n-i-1] - arr[i] != p ){
                flag = 1;
                break;              
            }
        }
        if(n%2 && (arr[n/2] != arr[n/2 + 1]) &&arr[n/2] != arr[n/2 - 1]){
            flag = 1;
            
        }
        if(flag)
        cout<<"NO"<<endl;
        else{
           cout<<"YES"<<endl; 
        }
        

        
    }
     return 0;
}


