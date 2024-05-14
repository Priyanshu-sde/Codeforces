#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt = 0;
    for(int i = 0;i < s.length();i++){
        if(s[i] == '7' || s[i] == '4')
        cnt++;
    }
    s = to_string(cnt);
    for(int i = 0;i < s.length();i++){
        if(!(s[i] == '7' || s[i] == '4'))
        cnt = -1;
    }
    if(cnt == -1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    return 0;
}