
//19
#include <bits/stdc++.h>
using namespace std;
double sum(double priceCand, double priceCook){
    return priceCand+priceCook;
}
int main(){
    double priceCand, priceCook;
    cin>>priceCand>>priceCook;
    double priceCand1=priceCand*0.3;
    double priceCook1=priceCook*0.4;
    cout<<sum(priceCand1, priceCook1)<<endl;
    double priceCook2=priceCook*2;
    double priceCand2=priceCand*1.8;
    cout<<3*sum(priceCand2, priceCook2);
    return 0;
}
    
