//Y. The last 2 digits
#include <iostream>
using namespace std;

int main ()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;
    int num1 = a%100, num2 = b%100, num3 = c%100, num4 = d%100;
    int result =(num1*num2*num3*num4)%100;
    (result<=9)? cout << "0"<<result : cout << result;

    return 0;
}
