//D. Fixed Password
#include <iostream>
using namespace std;

int main ()
{
    while (true)
    {
        int x;
        cin >> x;
        if (x == 1999)
        {
            cout << "Correct";
            break;
        }
        else
            cout << "Wrong" << "\n";

    }

    return 0;
}
