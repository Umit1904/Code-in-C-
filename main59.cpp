//59
#include <bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    if(number[0]>number[1] && number[1]>number[2] && number[2]>number[3]){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
} 
