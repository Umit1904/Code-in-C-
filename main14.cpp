//14
#include <iostream>
using namespace std;
double sum(double firstNumber, double secondNumber){
    return firstNumber+secondNumber;
}
double multiply(double firstNumber, double secondNumber){
    return firstNumber*secondNumber;
}
int main(){
    int firstNumber, secondNumber;
    cin>>firstNumber>>secondNumber;
    cout<<sum(firstNumber, secondNumber)<<endl;
    cout<<multiply(firstNumber, secondNumber);
    return 0;
}
