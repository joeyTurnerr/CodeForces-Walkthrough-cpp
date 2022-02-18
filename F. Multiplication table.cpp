//F. Multiplication table
#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    while (true)
    {
        for (int i = 1; i <= 12; i++)
        {
            cout << n << " * " << i << " = " << n*i << "\n";
        }
        break;
    }
    return 0;
}
