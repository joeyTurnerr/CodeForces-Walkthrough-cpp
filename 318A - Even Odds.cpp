//318A - Even Odds
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    long long n, k;
    cin >> n >> k;

    if ( n%2 == 0)
        (k <= n/2)? cout << 2*k-1 : cout << 2*(k-n/2);

    else
        (k<= (n/2 +1))? cout << 2*k-1 : cout << 2*(k-(n/2+1));
    return 0;
}
