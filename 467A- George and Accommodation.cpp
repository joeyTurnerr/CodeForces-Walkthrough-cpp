//467A- George and Accommodation

#include <iostream>
using namespace std;

int main ()
{
    int x, p, q, rest, counter{0};
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cin >> p >> q;

        if (p < q)
        {
            rest = q - p;
            if (rest >= 2)
                counter ++;
        }
    }
    cout << counter;
    return 0;
}
