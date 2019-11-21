//54
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    if(n1<5 && n2<5 || n2<5 && n3<5 || n1<5 && n3<5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
    return 0;
}
