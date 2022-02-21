//122A-Lucky Division

#include <bits/stdc++.h>
using namespace std;

bool is_lucky (int x)
{
    stringstream n;
    n << x;
    bool isLucky;

    for (int i = 0; i < n.str().length(); i++)
    {
        int j = x%10;
        if (j == 7 || j == 4)
            isLucky = true;
        else
        {
            isLucky = false;
            break;
        }
        x /=10;
    }
    return isLucky;

}


int main ()
{
    int x;
    bool checked{0};


    cin >> x;

    if (is_lucky(x))
    {
        cout <<"YES";
    }

    else
    {
        for (int i = 1; i <= x; i++)
        {
            int p = x % i;
            if (p == 0)
            {
                checked = is_lucky(i);
            }
            if (checked)
            {
                cout << "YES";
                break;
            }

        }
        if (!checked) cout << "NO";

    }

    return 0;
}
