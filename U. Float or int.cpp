//U. Float or int
#include <iostream>
using namespace std;

int main ()
{
    double n;

    cin >>n;
    int x =n;
    (n ==x)? cout << "int " << n : cout << "float " << x << " " << (n-x);
    return 0;
}
