//37
#include <bits/stdc++.h>
using namespace std;
int main (){
    int firstNumber, secondNumber;
    cin>>firstNumber>>secondNumber;
    int max=firstNumber;
    if(firstNumber<secondNumber){
        max=secondNumber;
    }
    cout<<max<<endl;
    return 0;
}

