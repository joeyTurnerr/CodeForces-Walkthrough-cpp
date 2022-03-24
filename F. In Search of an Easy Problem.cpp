//F. In Search of an Easy Problem
#include <iostream>
using namespace std;
int main ()
{
    int x; cin >> x;
    bool hard = false;
    for (int i = 0; i < x; i++)
    {
        int y; cin >> y;
        if (y == 1)
            hard = true;
    }
    (hard)? cout <<"HARD" : cout << "EASY";
    return 0;
}
