//T. Sort Numbers
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int a, b, c;

    cin >> a >> b >> c;

    if (a<=b && a<=c)
    {
        if (b<=c)
            cout << a <<"\n"<< b <<"\n"<< c <<"\n\n" << a <<"\n"<< b <<"\n"<< c;
        else
            cout << a <<"\n"<< c <<"\n"<< b <<"\n\n" << a <<"\n"<< b <<"\n"<< c;
    }
    else if (b<=a && b<=c)
    {
        if (a<=c)
            cout << b <<"\n"<< a <<"\n"<< c <<"\n\n" << a <<"\n"<< b <<"\n"<< c;
        else
            cout << b <<"\n"<< c <<"\n"<< a <<"\n\n" << a <<"\n"<< b <<"\n"<< c;
    }
    else
    {
        if (b<=a)
            cout << c <<"\n"<< b <<"\n"<< a <<"\n\n" << a <<"\n"<< b <<"\n"<< c;
        else
            cout << c <<"\n"<< a <<"\n"<< b <<"\n\n" << a <<"\n"<< b <<"\n"<< c;
    }

    return 0;
}
