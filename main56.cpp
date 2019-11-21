//56
#include <bits/stdc++.h>
using namespace std;
int main (){
    int direction, move;
    cin>>direction>>move;
    if(direction==12 && move==1 || direction==14 && move==-1 || direction==13 && move==0){
        cout<<"North";
    }
    else if(direction==12 && move==0 || direction==11 && move==1 || direction==13 && move==-1){
        cout<<"East";
    }
    else if(direction==11 && move==0 || direction==12 && move==-1 || direction==14 && move==1){
        cout<<"South";
    }
    else{
        cout<<"West";
    }
    return 0;
    
}

