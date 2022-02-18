//G. Factorial
#include <iostream>
using namespace std;

int main ()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long x, factorial{1};
        cin >> x;
        for (int i = 1; i <= x; i++)
        {
            factorial *= i;
        }
        cout << factorial << "\n";

    }
    return 0;
}
