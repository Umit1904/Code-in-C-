//78
#include <iostream>
using namespace std;
int main(){
    int rows, column;
    cin>>rows>>column;
    for(int i=0;i<rows;i++){
        cout<<"x";
        if(i==0 || i==rows-1){
            for(int x=1; x<column; x++){
                cout<<"x";
            }
            cout<<endl;
        }
        else{
            for(int d = 1; d<column; d++){
                if(d==column-1)
                cout<<"x";
                else cout<<"x"; 
            }
            cout<<endl;
        }
    }
}
