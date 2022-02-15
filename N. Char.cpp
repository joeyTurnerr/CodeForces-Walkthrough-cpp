//N. Char
#include <iostream>
using namespace std;

int main ()
{
    char x;

    cin >> x;
    (x<=90)?cout << (char)(x+32): cout << (char) (x-32);
    return 0;
}
