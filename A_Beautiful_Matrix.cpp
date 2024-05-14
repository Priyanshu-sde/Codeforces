#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    for(int  i = 0;i < 25;i++){
        cin>>a;
        if(a)
        cout<<abs(2-i%5)+ abs(2-i/5)<<endl;
    }
    return 0;
}