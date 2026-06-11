#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        n = n % k;
        n = n%2;
        if(n == 0 || k%2 == 1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
     return 0;
}
