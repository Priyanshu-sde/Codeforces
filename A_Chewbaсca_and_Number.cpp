#include<iostream>
using namespace std;
int main(){
    
        string s;
        cin>>s;
        for(int i = 0;i < strlen(s);i++){
            if(s[i] > 53)
            s[i] = 49 + (9-(s[i]-49))
        }
    
    cout<<s<<endl;
}