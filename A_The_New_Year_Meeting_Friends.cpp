#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    vector<int> arr;
    int i = 3;
    while(i--){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    cout<<abs(arr[0]-arr[1])+abs(arr[2]-arr[1])<<endl;

    
}