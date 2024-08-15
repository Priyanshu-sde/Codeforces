#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n;i++){
        cin>>a[i];
    }
    int max = 0,min = n-1;
    for(int i = 0; i < n;i++){
        if(a[max] < a[i])
        max = i;
        if(a[min] > a[n-1-i])
        min = n-i;
    }
    if(n == 2)
    cout<<1<<endl;
    else if(min < max)
    cout<<max+(n - min) -2<<endl;   
    else
    cout<<max+(n - min)<<endl;   
    

    return 0;
}