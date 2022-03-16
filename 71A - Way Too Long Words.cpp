//71A - Way Too Long Words
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
        if (s.length() > 10)
        {
            cout << s.front() << s.length()-2 << s.back() <<"\n";
        }
        else cout << s << "\n";

    }

}
