//W. Shape3
#include <iostream>
using namespace std;

int main ()
{
    int n, spaces, asterik;

    cin >> n;
    spaces = n-1;
    asterik = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int a = 1; a <= 2*i-1; a++)
        {
            cout << "*";
        }
        spaces--;
        cout << endl;
    }

    for (int s = 1; s <= n; s++)
    {
        for (int ss = 1; ss < s; ss++)
        {
            cout << " ";
        }
        for (int aa = 2*asterik-1; aa > 0 ;aa--)
        {
            cout << "*";
        }
        asterik--;
        cout << endl;
    }

    return 0;
}
