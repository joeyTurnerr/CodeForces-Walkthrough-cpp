//G. Palindrome Array
#include <iostream>
using namespace std;

int a[100000+5];

int main ()
{
    int n;
    bool flag{0};

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }

    for (int i = 0; i < n; i++)
    {
        if ( a[i] == a[n-1-i] )
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
