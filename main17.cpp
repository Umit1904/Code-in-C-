//17
#include <bits/stdc++.h>
using namespace std;
double sum(double num1, double num2, double num3){
    return (num1+num2+num3)/3;
}
double difference(double num1, double num2, double num3){
    return 2*(num1+num3) - 3*num2;
}
int main(){
    double num1, num2, num3;
    cin>>num1>>num2>>num3;
    cout<<sum(num1, num2, num3)<<endl;   
    cout<<difference(num1, num2, num3);
    return 0;
}


