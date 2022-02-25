//A. Summation
#include <iostream>
using namespace std;

int main ()
{
    long long e, sum{0};
    cin >> e;
    long long a[e]={};

    for (int i = 0; i < e; i++)
    {
        cin >> a[i];
        sum+= a[i];
    }
    cout << abs(sum);

    return 0;
}
