//51
#include <bits/stdc++.h>
using namespace std;
int main(){
    int numb1, numb2, numb3;
    cin>>numb1>>numb2>>numb3;
    if(numb1+numb2==numb3 || numb2+numb3==numb1 || numb1+numb3==numb2){
        cout<<"YES"<<endl;
    }
    return 0;
}
