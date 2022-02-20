//L. GCD
#include <iostream>
using namespace std;

int main ()
{
    int x, y, minimum, gcd;


    cin >> x >> y;

    minimum = min(x,y);
    for (int i = 1; i <= minimum; i++)
    {
        if (x % i == 0 && y % i == 0)
            gcd = i;
    }
    cout << gcd;

    return 0;
}
