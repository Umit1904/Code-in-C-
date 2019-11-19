//38
#include <bits/stdc++.h>
using namespace std;
int main (){
    int firstNumber, secondNumber;
    cin>>firstNumber>>secondNumber;
    if(firstNumber-secondNumber==100 || secondNumber-firstNumber==100){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
