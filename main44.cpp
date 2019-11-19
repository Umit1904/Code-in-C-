

//44
#include <bits/stdc++.h>
using namespace std;
int main (){
    int firstNumber, secondNumber;
    cin>>firstNumber>>secondNumber;
    if(firstNumber!=10 && secondNumber!=10 && firstNumber%2==0){
        cout<<firstNumber+secondNumber<<endl;
    }
    else{
        cout<<firstNumber*secondNumber;
    }
    return 0;
}


