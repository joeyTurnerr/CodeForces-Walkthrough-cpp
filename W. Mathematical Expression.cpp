//W. Mathematical Expression
#include <iostream>
using namespace std;

int main ()
{
    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    if (s == '+')
        ((a+b)==c)? cout << "Yes": cout << a+b;
    else if (s == '*')
        ((a*b)==c)? cout << "Yes": cout << a*b;
    else
        ((a-b)==c)? cout << "Yes": cout << a-b;


    return 0;
}
