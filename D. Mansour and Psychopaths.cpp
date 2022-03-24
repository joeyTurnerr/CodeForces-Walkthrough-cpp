//D. Mansour and Psychopaths
#include <iostream>
using namespace std;

int main ()
{
    int x;
    int counter{0};

    cin >> x;

    for (int i = 0; i < x; i++)
    {
        char y; cin >> y;
        if (y == 'L')
            counter++;
    }
    cout << counter;

    return 0;
}
