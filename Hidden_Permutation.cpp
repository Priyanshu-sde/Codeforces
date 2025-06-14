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
    map<int,int> a;
    string s;
    for(int i = 0;i < n;i++){
        int ans= 1;
        for(int j = i+1;j < n;j++){
            cout<<"? "<<i+1<<" "<<j+1<<endl;
            cin>>s;
            if(s == "NO") ans++; 
            else a[j]++;
        }
        a[i]+=ans;
    }  
    cout<<"!";
    for(int i = 0;i < n;i++){
        cout<<a[i]<<" ";
    } 
    cout<<endl;
    return 0;
}