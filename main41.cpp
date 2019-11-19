
//41
#include <bits/stdc++.h>
using namespace std;
int main (){
    int number;
    cin>>number;
    if(number<-100 || number>100){
        number=0;
    }
    else{
        number++;
    }
    cout<<number<<endl;
    return 0;
}
