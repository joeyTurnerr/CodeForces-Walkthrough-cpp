//A. Winter Sale
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double x, p;

    cin >> x >> p;
    cout <<fixed<<setprecision(2)<< p/(1-x/100);
    return 0;
}
