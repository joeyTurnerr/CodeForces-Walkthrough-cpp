//486A-Calculating Function
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    long long x;
    cin >> x;
    if (x == 1)
    {
        cout << -1;
        return 0;
    }
    (x & 1)? cout << -(x/2 +1 ) <<endl :cout << x/2;   

}
