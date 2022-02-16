//A. Winter Sale
#include <iostream>
#include <iomanip>
using namespace std;

double round (double x)
{
    double value = (int) (x*100 +.5);

    return (double) value/100;
}

int main ()
{
    double x, p;

    cin >> x >> p;
    cout <<fixed<<setprecision(2)<< p/(1-x/100);
    return 0;
    
    //another solution
    double result = y/ (1-x/100);
    cout << round(result);
}
