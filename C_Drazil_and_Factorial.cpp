#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
const int N = 1e7;
#define all(a) a.begin(),a.end()

int main(){
    int n;
    cin>>n;
    string num;
    cin>>num;
    vector<char> ans;
    for(int i  = 0;i < n;i++){
        if(num[i] != '0' && num[i] != '1') {
            ans.push_back(num[i]);
        }
    }
    for(int i = 0;i < ans.size();i++){
        if(ans[i] == '9'){
            ans[i] = '0';
            ans.push_back('3');
            ans.push_back('3');
            ans.push_back('2');
            ans.push_back('7');
        }
        else if(ans[i] == '8'){
            ans[i] = '0';
            ans.push_back('2');
            ans.push_back('2');
            ans.push_back('2');
            ans.push_back('7');            
        }
        else if(ans[i] == '6'){
            ans[i] = '0';
            ans.push_back('3');
            ans.push_back('5');
        }
        else if(ans[i] == '4'){
            ans[i] = '0';
            ans.push_back('2');
            ans.push_back('2');
            ans.push_back('3');
        }
    }
    sort(ans.begin(),ans.end(), greater<int>());

    for(int i = 0;i < ans.size();i++){
        if(ans[i] != '0' && ans[i] != '1'){
            cout<<ans[i];
        }
    }

    cout<<endl;
    return 0;
}