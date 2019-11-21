//57
#include <bits/stdc++.h>
using namespace std;
int main(){
    int day, month, year;
    cin>>day>>month>>year;
    switch(month){
        case 1://January
        case 3://March
        case 5://May 
        case 7://July
        case 8://August
        case 10://October
        case 12://December
                if(day>=1 && day<=31 && year>=0001){
                    cout<<"Data exists"<<endl;
                }
                else{
                    cout<<"Data does not exists"<<endl;
                break;
                }
        case 2://FEbruary
                if(day>=1 && day<=28 && year>=0001){
                    cout<<"Data exists";
                }
                else{
                   cout<<"Data does not exists";
                 break;
                }
        case 4://April
        case 6://June
        case 9://September
        case 11://November
            if(day>=1 && day<=30 && year>=0001){
                cout<<"Data exists";
            }
            else{
                cout<<"Data does not exists";
            }
            break;
                
        
        }
        return 0;
}
       
