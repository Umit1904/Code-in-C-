//68
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int D=b*b-4*a*c;
    if(D==0){
        cout<<"One root: "<<-b/2*a;
    }
    else if(D<0){
        cout<<"Doesn't exist any roots";
    }
    else if(D>0){
        cout<<"Two roots: "<<(-b+sqrt(D))/2*a<<","<<(-b-sqrt(D))/2*a;
    }
    return 0;
}
