//514A-Chewbaсca and Number
#include <iostream>
using namespace std;

int main ()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] >= '5'|| s[i] == '9')
        {
            if (i == 0 && s[i] == '9')
                cout << s[i];
            else
                cout << '9' - s[i];
        }
        else
            cout << s[i];

    }

    return 0;
}
