//L. The Brothers
#include <iostream>
using namespace std;

int main ()
{
    string f1, s1, f2, s2;

    cin >> f1 >> s1 >> f2 >> s2;
    (s1 == s2) ? cout << "ARE Brothers" : cout << "NOT";

    return 0;

    //anoter solution
    if (s1 == s2)
        cout << "ARE Brothers";
    else
        cout << "NOT";
}
