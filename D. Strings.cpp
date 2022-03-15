//D. Strings
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string a, b;

    cin >> a >> b;

    cout << a.length() << " " << b.length() << '\n';
    cout << a + b <<'\n';
    string aa = a[0] + b.substr(1, b.length()-1);
    a[0] = b[0];
    cout << a << " " << aa ;

    return 0;
}
