//41A-Translation
#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    string a,b;
    cin >> a >> b;

    reverse(b.begin(), b.end());

    (a == b)? cout << "YES":cout <<"NO";

    return 0;
}
