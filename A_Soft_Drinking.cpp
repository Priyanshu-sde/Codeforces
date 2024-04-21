#include<iostream>
using namespace std;
int main(){
    
        int n,k,l,c,d,p,nl,np;
        cin>>n>>k>>l>>c>>d>>p>>nl>>np;
        int t = min(k*l/nl,c*d);
        cout<<min(t,p/np)/n<<endl;;
    
}