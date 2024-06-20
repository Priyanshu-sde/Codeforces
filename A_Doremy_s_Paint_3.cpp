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
        int flag = 0,p=n/2;
        for(int i = 0;i < n-1;i++){
            if(arr[i] != arr[i+1]){
                flag++;  
                p = i+1;              
            }
        }
        if(flag > 1)
        cout<<"NO"<<endl;
        else{
            
        }
        

        
    }
     return 0;
}


