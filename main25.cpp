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
