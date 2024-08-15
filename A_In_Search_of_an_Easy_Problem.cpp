#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool fl = 0;
    int a;
    while(n--){
        cin>>a;
        if(!a)
        fl = 1;
    }
    if(a)
    cout<<"HARD"<<endl;
    else
    cout<<"EASY"<<endl;
    return 0;
}