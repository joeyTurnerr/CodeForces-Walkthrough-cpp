//X. Two intervals
#include <iostream>
using namespace std;

int main ()
{
    int l1, r1, l2, r2, i1, i2;

    cin >> l1 >> r1 >> l2 >> r2;

    if (r1 < l2 && l1 < l2 || r2 < l1 && l2 <l1)
        cout <<-1;
    else
    {
        (l1 < l2)? i1 = l2: i1 = l1;

        (r1 < r2)?i2 = r1: i2 = r2;
        cout << i1 << " "<< i2;
    }
    return 0;
}
