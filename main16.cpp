//16 
#include <bits/stdc++.h>
using namespace std;
double sum(double x, double y, double z){
    return x+y+z;
}
int main(){
    double num1, num2, num3;
    cin>>num1>>num2>>num3;
    num1*=2;
    num2= num2-3;
    num3=pow(num3, 2);
    cout<<sum(num1, num2, num3);
    return 0;
}


