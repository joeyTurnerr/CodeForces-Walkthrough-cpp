//F. Way Too Long Words
#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s.length() <= 10)
            cout << s <<'\n';
        else
            cout << s[0] << s.length()-2 << s[s.length()-1] << '\n';
    }

    return 0;
}
