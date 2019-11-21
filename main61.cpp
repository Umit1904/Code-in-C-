//61
#include <bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    if(number[0]==number[1] || number[1]==number[2] || number[2]==number[3] || 
       number[0]==number[2] || number[1]==number[3] || number[0]==number[3]){
           cout<<"Number have the same numerals";
       }
    return 0;
} 

