//16 
#include <bits/stdc++.h>
using namespace std;
double sum(double x, double y, double z){
    return x+y+z;
}
int main(){
    double num1, num2, num3;
    cin>>num1>>num2>>num3;
    num1*=2;
    num2= num2-3;
    num3=pow(num3, 2);
    cout<<sum(num1, num2, num3);
    return 0;
}

//17
#include <bits/stdc++.h>
using namespace std;
double sum(double num1, double num2, double num3){
    return (num1+num2+num3)/3;
}
double difference(double num1, double num2, double num3){
    return 2*(num1+num3) - 3*num2;
}
int main(){
    double num1, num2, num3;
    cin>>num1>>num2>>num3;
    cout<<sum(num1, num2, num3)<<endl;   
    cout<<difference(num1, num2, num3);
    return 0;
}


//18
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    cout<<"Perimeter= "<<4*a<<endl;
    cout<<"Area= "<<a*a<<endl;
    return 0;
}

//19
#include <bits/stdc++.h>
using namespace std;
double sum(double priceCand, double priceCook){
    return priceCand+priceCook;
}
int main(){
    double priceCand, priceCook;
    cin>>priceCand>>priceCook;
    double priceCand1=priceCand*0.3;
    double priceCook1=priceCook*0.4;
    cout<<sum(priceCand1, priceCook1)<<endl;
    double priceCook2=priceCook*2;
    double priceCand2=priceCand*1.8;
    cout<<3*sum(priceCand2, priceCook2);
    return 0;
}
    
//20
#include <bits/stdc++.h>
using namespace std;
int main(){
    double minutes, distance;
    cin>>minutes>>distance;
    double speed = (distance*1000)/(minutes*60);
    cout<<speed<<"m/sec"<<endl;
    return 0;
}
    
//21
#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b;
    cin>>a>>b;
    double c = sqrt(a*a + b*b);
    cout<<"Area= "<<(a*b)/2<<endl;
    cout<<"Perimeter= "<<a + b + c<< endl;
    cout<<"Hypotenuse= "<<c;
    return 0;
    
}
    
//22
#include <bits/stdc++.h>
using namespace std;
int main(){
    int tempC;
    cin>>tempC;
    double tempF=tempC*(1.8)+32;
    cout<<"In Fahrenheit= "<<tempF<<"F";
    return 0;
}

//23
#include <bits/stdc++.h>
using namespace std;
int main(){
    double perKgCand, x, k;
    cin>>perKgCand>>x>>k;
    double a=x*perKgCand;
    double kg=k/perKgCand;
    cout<<a<<" dollars"<<endl;
    cout<<kg<<" kg";
    return 0;
}

//24
#include <iostream>
using namespace std; 
int main(){
int days,sale;
float sum = 0.0f;
cin >> days >> sale >> sum;
sale /= 100;
for (int i = 0; i < days; i++)
{
sum += 3; 
sum += sum * sale; 
}
cout << sum << endl;
}


//25
#include <iostream>
using namespace std;
int sumDays(int a, int b, int c){
    return a*7 + b*30 + c*360;
}
int main(){
    int week, month, year;
    cin>>week>>month>>year;
    cout<<sumDays(week, month, year)<<" days";
    return 0;
}

//26
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
    return 0;
}

//27
#include <iostream>
using namespace std;
int main(){
    int a1, b1, c1;
    cin>>a1>>b1>>c1;
    int a=a1+b1;
    int b=c1-a1;
    int c=a1+b1+c1;
    cout<<a<<" "<<b<<" "<<c;
    return 0;
    
}
