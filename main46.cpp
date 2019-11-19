//46
#include <bits/stdc++.h>
using namespace std;
int main (){
    int number1, number2, number3;
    cin>>number1>>number2>>number3;
    if(number1%5==0 && number2%5==0 && number3%5==0){
        cout<<number1+number2+number3<<endl;
    }
    else if(number1%5==0 && number2%5==0 && number3%5!=0){
        cout<<number1+number2<<endl;
    }
    else if(number1%5==0 && number2%5!=0 && number3%5!=0){
        cout<<number1<<endl;
    }
    else if(number1%5==0 && number2%5!=0 && number3%5==0){
        cout<<number1+number3<<endl;
    }
    else if(number1%5!=0 && number2%5!=0 && number3%5==0){
        cout<<number3<<endl;
    }
    else if(number1%5!=0 && number2%5==0 && number3%5==0){
        cout<<number2+number3<<endl;
    }
    else if(number1%5!=0 && number2%5==0 && number3%5!=0){
        cout<<number2<<endl;
    }
    else{
        cout<<"ERROR"<<endl;
    }
    return 0;
}

