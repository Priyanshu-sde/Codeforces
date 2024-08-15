#include<bits/stdc++.h>
using namespace std;

#define sr(a) sort(a.begin(),a.end())
#define ll long long

int main(){
    int n;
    cin>>n;
    while(n != 1){
        cout<<n<<" ";
        if(n%2){
            n *= 3;
            n++;
        }
        else{
            n /= 2;
        }
    }
    cout<<1<<endl;

}