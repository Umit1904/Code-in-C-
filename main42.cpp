
//42
#include <bits/stdc++.h>
using namespace std;
int main (){
    int number;
    cin>>number;
    if(number>=2 && number<=5){
        number = number+10;
    }
    else if(number>=7 && number<=40){
        number-=100;
    }
    else if(number<0 || number>3000){
        number*=3;
    }
    cout<<number<<endl;
    return 0;
}
