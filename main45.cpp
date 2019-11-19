//45
#include <bits/stdc++.h>
using namespace std;
int main (){
    int number1, number2, number3;
    cin>>number1>>number2>>number3;
    if(number1>10 && number2>10 && number3>10 && number1%3==0 && number2%3==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

