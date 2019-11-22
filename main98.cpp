//98
#include <bits/stdc++.h>
using namespace std;
int main(){
	float day1,bM,P,K,i=0;
	cout << "Enter day1: ";
	cin >> day1;
	cout << "Enter % incresed : ";
	cin >> P;
	cout << "Enter max km: ";
	cin >> K;
	bM = day1;
	while(K > day1)
	{
		day1 = day1+(bM/100*P);
		bM = day1;
		i++;
	}
 
	cout << "In "<< i << " day more than " << K << " km" << endl;
	cout<<"In "<<i-1<<" day he should stop increase the distance";
}
