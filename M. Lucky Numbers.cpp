//M. Lucky Numbers
#include <iostream>
#include <strings.h>
#include <sstream>
using namespace std;

bool isLucky (int x)
{
    bool islucky{0};
    stringstream ss;
    ss << x;

    for (int i = 1; i <= ss.str().length(); i++)
    {
        int p = x % 10;

        if (p == 7 || p == 4)
        {
            islucky = true;
        }
        else
        {
            islucky = false;
            break;
        }
        x/=10;
    }

    return islucky;
}

int main ()
{
    int x, p;
    bool checked {0};

    cin >> x >> p;

    for (int i = x; i <= p; i++)
    {
        if (isLucky(i))
        {
            checked = true;
            cout << i <<" ";
        }
    }
    if (checked == false)
        cout << -1;
        
        
    return 0;

}
