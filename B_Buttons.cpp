#include <bits/stdc++.h>
using namespace std;
int fact(int a);

int main(){
    int n;
    cin>>n;
    cout<<fact(n) + 1<<endl;
    return 0;
}
int fact(int a){
    if(a == 1)
    return 1;
    else
    return a*fact(a-1);
}