

//49
#include <bits/stdc++.h>
using namespace std;
int main (){
    int number1, number2, number3, number4;
    cin>>number1>>number2>>number3>>number4;
    if(number1>number2 && number1>number3 && number1>number4 && number1%2==0){
        cout<<number1<<endl;
    }
    else if(number2>number1 && number2>number3 && number2>number4 && number2%2==0){
        cout<<number2<<endl;
    }
    else if(number3>number1 && number3>number2 && number3>number4 && number3%2==0){
        cout<<number3<<endl;
    }
    else if(number4>number1 && number4>number2 && number4>number2 && number4%2==0){
        cout<<number4<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
