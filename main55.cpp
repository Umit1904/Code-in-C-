//55
#include <bits/stdc++.h>
using namespace std;
int main (){
    int number1, number2, number3;
    cin>>number1>>number2>>number3;
    if(number1>0 && number2>0 && number3>0){
        cout<<3<<endl;
    }
    else if(number1>0 && number2>0 || number2>0 && number3>0 || number1>0 && number3>0){
        cout<<2<<endl;
    }
    else if(number1>0 || number2>0 || number3>0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}
