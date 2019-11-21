//94
#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cout<<"Enter n+1: "<<endl;
    cin>>n;
    double number=0.0;
    for(int i=1;i<n; i++){
        number+=(1/double(i));
    }
    cout<<"Result: "<<number;
    system("pause");
    return 0;
} 
