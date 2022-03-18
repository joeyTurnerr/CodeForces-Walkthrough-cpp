//266A-Stones on the Table
#include <iostream>
using namespace std;

int main ()
{
    int a, counter{0}; cin >> a;
    string s; cin >>s;

    for (int i = 1; i < a; i++)
    {
        if (s[i] == s[i-1])
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}
