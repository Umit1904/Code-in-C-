
//39
#include <bits/stdc++.h>
using namespace std;
int main (){
    int firstNumber, secondNumber;
    cin>>firstNumber>>secondNumber;
    if(firstNumber>secondNumber){
        cout<<"YES"<<endl;
    }
    else{
        swap(firstNumber, secondNumber);
        cout<<firstNumber<<" "<<secondNumber;
    }
    return 0;
}
