//60
#include <bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    int temp;
    temp=number[0];
    number[0]=number[2];
    number[2]=temp;
    cout<<number;
    return 0;
} 
