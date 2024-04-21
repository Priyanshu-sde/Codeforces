#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        bool flag = 0;
        n = n%(k+2);
        if(n%2 == 0 || n%k == 0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
     return 0;
}
