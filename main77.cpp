//77
#include <iostream>
using namespace std;
int main(){
    int rows, column;
    cin>>rows;
    column=5;
    for(int i=0;i<rows;i++){
        cout<<"0";
        if(i==0 || i==rows-1){
            for(int x=1; x<column; x++){
                cout<<"0";
            }
            cout<<endl;
        }
        else{
            for(int d = 1; d<column; d++){
                if(d==column-1)
                cout<<"0";
                else cout<<"0"; 
            }
            cout<<endl;
        }
    }
}
