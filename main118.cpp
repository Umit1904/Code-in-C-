//118
#include <bits/stdc++.h>
using namespace std;
int main(){
    int number;
    int count=0;
    do{cin>>number;
     if(number%2==0){
        count++;
    }
    }while(number!=0);
    cout<<count-1<<endl;
    return 0;
}
