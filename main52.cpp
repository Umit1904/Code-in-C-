//52
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, n3, n4;
    cin>>n1>>n2>>n3>>n4;
    if(n1>5 && n2>5 && n3%6==0 && n4%3!=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
