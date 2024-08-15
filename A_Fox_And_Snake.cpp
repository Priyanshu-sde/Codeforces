#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if((i%2) && j == 0 && i%4 == 3)
            cout<<"#";
            if(!(i%2))
            cout<<"#";
            if(i%2 && j < m -1)
            cout<<".";
            if((i%2) && j == m-1 && i%4 == 1)
            cout<<"#";
        }
        cout<<endl;
    }
}