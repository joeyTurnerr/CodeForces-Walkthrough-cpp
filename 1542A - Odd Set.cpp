//1542A - Odd Set
#include <iostream>
using namespace std;
int main ()
{
    int t; cin >> t;

    while (t--)
    {
        int a, odd{0};
        cin >> a;
        
        for (int i = 0; i < 2*a; i++)
        {
            int b;
            cin >> b;
            if (b&1) odd++;
        }
        if (odd == a)
            cout << "Yes\n";
        else
            cout << "No\n";

    }
    return 0;
}
