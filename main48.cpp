//48
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a+b>a+c && a+b>b+c){
        cout<<a<<" and "<<b;
    }
    if(a+c>a+b && a+c>b+c){
        cout<<a<<" and "<<c;
    }
    if(c+b>a+c && c+b>b+a){
        cout<<b<<" and "<<c;
    }
    
}
