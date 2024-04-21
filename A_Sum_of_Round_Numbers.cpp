#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a =0;
        for(int i = 0;i < s.size();i++){
            if(s[i] != '0')
            a++;
        }
        cout<<a<<endl;
        for(int i = 0;i < s.size();i++){
            if(s[i] != '0'){
                cout<<s[i];
                int a = s.size() - 1- i;
                while(a--){
                    cout<<0;
            }
            cout<<" ";
            }            
        }
        cout<<endl;
    }
}