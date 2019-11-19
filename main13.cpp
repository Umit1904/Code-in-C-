//13
#include <bits/stdc++.h>
using namespace std;
int main(){
   double a=0.1;
   double b=0.2;
   double x=1;
   cout<<pow(x*x+b, 0.2) - (b*b*pow(sin(x+a), 3))/x<<endl;
   return 0;
}

