//99
#include <bits/stdc++.h>
 using namespace std;
 bool differetn(int n)
{
    while (n > 0)
    {
        if (n/1000%10!=n/100%10 && n/100%10!=n/10%10 && n/10%10!=n%10 &&
            n/1000%10!=n/10%10 && n/1000%10!=n%10 && n/100%10!=n%10) return true;
        n /= 10;
    }
    return false;
}
int main()
{
    cout << "\n";
    for (int i = 1000; i <= 9999; i++)
    {
        if (differetn(i))
            cout << i << " ";
    }
    cout << "\n";
    system("pause");
    return 0;
}
