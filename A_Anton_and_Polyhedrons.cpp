#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int a = 0;
    while(n--){
        cin>>s;
        if(s == "Tetrahedron" ) 
        a += 4;
        else if(s == "Cube")
        a += 6;
        else if(s == "Octahedron")
        a += 8;
        else if(s == "Dodecahedron")
        a += 12;
        else if(s == "Icosahedron")
        a += 20;
    }
    cout<<a<<endl;
    return 0;
}