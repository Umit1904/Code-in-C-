//64
#include <bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    if(number[0]==number[3] && number[1]==number[2]){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
