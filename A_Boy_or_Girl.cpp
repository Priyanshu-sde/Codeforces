#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> a;
    for(int  i = 0;i  < s.length();i++){
        a.insert(s[i]);
    }
    if(a.size()%2)
    cout<<"IGNORE HIM!"<<endl;
    else
    cout<<"CHAT WITH HER!"<<endl;
    return 0;
}