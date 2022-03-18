//1367A-Short Substrings
#include <iostream>
using namespace std;

int main ()
{
    int t; cin >>t;
    while (t--)
    {
        string s; cin >> s;
        cout << s[0];
        for (int i = 1; i < s.length(); i+=2)
        {
            cout << s[i];
        }
        cout <<"\n";
    }

    return 0;
}
