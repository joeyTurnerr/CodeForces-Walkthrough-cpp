//P. Shape1
#include <iostream>
using namespace std;

int main ()
{
    int x;
    cin >> x;

    for (;x > 0; x--)
    {
        for (int j = x; j > 0; j--)
        {
            cout << '*';
        }
        cout << "\n";
    }

    return 0;
}
