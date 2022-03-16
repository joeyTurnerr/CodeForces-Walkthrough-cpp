//J. Count Letters
#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    string s;

    cin >> s;

    sort(s.begin(),s.end());

    char selection = s[0];
    int counter{0};

    for (int i = 0; i <= s.length()-1; i++)
    {

        if (s[i] == selection)
        {
            counter++;
        }
        else
        {
            cout << selection << " : " << counter << '\n';
            selection = s[i];
            counter = 1;
            continue;
        }
    }
    cout << selection << " : " << counter << '\n';

    return 0;
}
