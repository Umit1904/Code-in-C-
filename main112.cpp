//112
#include <bits/stdc++.h>
using namespace std;
int main(){
    int size=10;
    int arr[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) 
            arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }
 
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
              cout << arr[i][j] << " ";
        }
              cout <<endl;
    }
 
    return 0;
}
