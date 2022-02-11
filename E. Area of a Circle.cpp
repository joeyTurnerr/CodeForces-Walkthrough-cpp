//E. Area of a Circle
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(9);
    const double pi = 3.141592653;
    double r;

    cin >> r;
    cout<< pi*r*r;
    return 0;
}
