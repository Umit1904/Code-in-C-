//3 
#include <iostream>
using namespace std;
int main(){
    int i, j;
    for(i=1; i<=5;i++){
        for(j=1;j<=i; j++){
            cout<<'0';
        }
        cout<<' '<<endl;
    }
    return 0;
}

//4
#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<8; j++){
            cout<<"A";
        }
        cout<<endl;
    }
    return 0;
}

//5
#include <bits/stdc++.h>
using namespace std;
int main (){
    cout<<"*      *      *"<<endl;
    cout<<" *    * *    * "<<endl;
    cout<<"  *  *   *  *  "<<endl;
    cout<<"   *       *   "<<endl;
    return 0;
}

//6 
#include <iostream>
using namespace std;
int main(){
    int a=1+2-4;
    cout<<a<<endl;
    return 0;
}

//7
#include <iostream>
using namespace std;
double sum(double firstNumber, double secondNumber){
    return firstNumber+secondNumber;
}
int main(){
    double firstNumber=0.5;
    double secondNumber=0.25;
    cout<<sum(firstNumber, secondNumber);
return 0;
    
}

//8
#include <iostream>
using namespace std;
int main(){
    int a=2;
    int b=3;
    cout<<(a + 4*b)*(a - 3*b) + a*a<<endl;
}

//9
#include <bits/stdc++.h>
using namespace std;
int main(){
   int x=-2;
   cout<<abs(x)+pow(x,5)<<endl;
   return 0;
}

//10
#include <iostream>
using namespace std;
void result(double x){
    cout<<(x+1)*(x+1) +3*(x+1)<<endl; 
}
int main(){
    double x1= 1.7;
    double x2= 3;
    result(x1);
    result(x2);
    return 0;
}

//11
#include <bits/stdc++.h>
using namespace std;
int main () {
    double x=-2.34;
    double result;
    result=((abs(x-5)-sin(x))/3)+sqrt(x*x+2014)*cos(2*x)-3;
    cout<<result<<endl;
    return 0;
}

//12
#include <bits/stdc++.h>
using namespace std;
int main(){
   double x = 3.6;
   double sec = x-2;
   double answer = exp(sec)+abs(sin(x))-x*x*x*x*cos(1/x);
   cout << answer << endl;
   return 0;
}

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

//14
#include <iostream>
using namespace std;
double sum(double firstNumber, double secondNumber){
    return firstNumber+secondNumber;
}
double multiply(double firstNumber, double secondNumber){
    return firstNumber*secondNumber;
}
int main(){
    int firstNumber, secondNumber;
    cin>>firstNumber>>secondNumber;
    cout<<sum(firstNumber, secondNumber)<<endl;
    cout<<multiply(firstNumber, secondNumber);
    return 0;
}

//15
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int somenumber;
    cin>>somenumber;
    cout<< pow(somenumber, 2)<<endl;
    cout<< pow(somenumber, 3);
    return 0;
}
