
//43
#include <bits/stdc++.h>
using namespace std;
int main (){
    int numberMonth;
    cin>>numberMonth;
    if(numberMonth==12 || (numberMonth>=1 && numberMonth<=2)){
        cout<<"Winter"<<endl;
    }
    else if(numberMonth>=3 && numberMonth<=5){
        cout<<"Spring"<<endl;
    }
    else if(numberMonth>=6 && numberMonth<=8){
        cout<<"Summer"<<endl;
    }
    else{
        cout<<"Autumn"<<endl;
    }
    return 0;
}
