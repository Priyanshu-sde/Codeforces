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
        bool flag = true;
        for(int i = 0;i<n;i++){
            if(arr[i] == arr[i+1] )
            continue;
            if(n%2 == 1){
                if(arr[n/2] == arr[n/2 + 1] || arr[n/2 + 2] == arr[n/2 + 1])
                continue;
            }
            else{
                if(arr[n/2] == arr[n/2 + 1])
                continue;

            }
            
                
                flag = false;
                break;
            }

            
        
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

        
    }
     return 0;
}


