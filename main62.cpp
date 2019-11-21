//62
#include <bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    for(int i=0; i<5; i++){
        if(number[i]%2==0){
            number[i]='0';
        }
    }
    cout<<number;
    return 0;
}
