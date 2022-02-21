//S. Sum of Consecutive Odd Numbers
#include <iostream>
using namespace std;

int main ()
{
    int x, a, b, sum{0};

    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> a >> b;
        for (int j = min(a,b)+1; j < max(a,b); j++)
        {
            if (j % 2 != 0)
            {
                sum = sum + j;
            }
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
