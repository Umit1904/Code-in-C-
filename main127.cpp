//127
#include <iostream>
using namespace std;
 int main (){
     int a;
     int d=2;
     cin>>a;
     for( ; d<=a / 2 ; d++){
         if(a%d == 0)
         break;
         }
         if( d>a/2 )
         cout<<"It  is a prime number"<<endl;
         else
         cout<<"It is not a prime number"<<endl;
}
