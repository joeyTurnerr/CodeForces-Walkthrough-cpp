//Z. Hard Compare
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    long long a, b, c, d;

    cin >> a >> b >> c >> d;
    (b*log(a) > d * log(c))? cout << "YES": cout <<"NO";

    return 0;
}
