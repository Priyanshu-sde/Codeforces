#include <bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int  i = 0;i < n;i++)
#define sr(a) sort(a.begin(),a.end())
#define srd(a) sort(a.begin(),a.end(),greater<int>())
#define ll long long
int N = 10e7;
#define all(a) a.begin(),a.end()

void stackfn() {
    stack<int> s;
    s.push(10);
    s.push(12);
    s.push(11);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

void queuefn() {
    queue<int> s;
    s.push(10);
    s.push(12);
    s.push(11);
    while(!s.empty()){
        cout<<s.front()<<endl;
        cout<<s.back()<<endl;
        s.pop();
    }
}

void summ() {
    vector<int> s;
    s.push_back(10);
    s.push_back(12);
    s.push_back(11);
    s.push_back(11);
    int sum = accumulate(s.begin(),s.end(),0);
    int cnt = count(s.begin(),s.end(),11);
    int pos = find(s.begin(),s.end(),11) - s.begin();
    reverse(s.begin(),s.end());         
    cout<<sum<<endl<<cnt<<endl<<pos<<endl;


}


int main(){
    summ();
    return 0;
}