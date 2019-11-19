//47
#include <bits/stdc++.h>
using namespace std;
int main (){
    int number1, number2, number3;
    cin>>number1>>number2>>number3;
    int max=number1;
    if(max<number2 && number2>number3){
        max=number2;
    }
    else if(max<number3 && number3>number2){
        max=number3;
    }
    cout<<max;
    return 0;
}
