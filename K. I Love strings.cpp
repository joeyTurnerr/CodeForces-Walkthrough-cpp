//K. I Love strings
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s,t;
        cin >> s >> t;

        if ( s.length() == t.length() )
        {
            for (int i = 0; i < t.length() ; i++)
            {
                cout << s[i] << t[i];
            }
            cout << "\n";
        }
        else if (s.length() > t.length())
        {
            for (int i = 0; i < t.length() ; i++)
            {
                cout << s[i] << t[i];
            }
            for (int j = t.length(); j < s.length();j++)
            {
                cout << s[j];
            }
            cout << "\n";
        }
        else if (t.length() > s.length())
        {
            for (int i = 0; i < s.length() ; i++)
            {
                cout << s[i] << t[i];
            }
            for (int j = s.length(); j < t.length();j++)
            {
                cout << t[j];
            }
            cout << "\n";
        }


    }

    return 0;
}
