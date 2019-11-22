//147
#include <bits.stdc++.h>
using namespace std;
int main(){
    srand( time( NULL ) ); 
    for (size_t i = 0; i < 7; i++)
   {
        for (size_t j = 0; j < 7; j++) cout << char((rand() % 16)+65) << " ";
        cout << endl;
    }
    system("pause");
    return 0;
}
