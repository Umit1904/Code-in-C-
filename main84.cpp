//84
#include <bits/stdc++.h>
using namespace std;
int main(){
    double dollarRate;
    cin>>dollarRate;
    double kgCand;
    for(int i=1;i<=100;i++){
        kgCand=(i*dollarRate)/20;
        cout<<"1$ - "<<i*dollarRate<<"rub - "<<kgCand<<"kg"<<endl;
    }
    return 0;
}
