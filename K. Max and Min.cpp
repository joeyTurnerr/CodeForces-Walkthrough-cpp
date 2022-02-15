//K. Max and Min
#include <iostream>
using namespace std;

int main ()
{
    int a, b, c;

    cin >> a >> b >> c;

    if ( a<=b && a<=c )
        (b<c)? cout << a << " " << c : cout << a << " " << b;
    else if ( b<=a && b<=c )
        (a<c)? cout << b << " " << c : cout << b << " " << a;
    else if ( c<=a && c<=b )
        (a<b)? cout << c << " " << b : cout << c << " " << a;

    return 0;

    //another solution
    if ( a<b && a<c )
    {
        if(b<c)
            cout << a << " " << c;
        else
            cout << a << " " << b;
    }
    else if ( b<a && b<c )
    {
        if (a<c)
            cout << b << " " << c;
        else
            cout << b << " " << a;
    }
    else if ( c<a && c<b )
    {
        if (a<b)
            cout << c << " " << b;
        else
            cout << c << " " << a;
    }


}
