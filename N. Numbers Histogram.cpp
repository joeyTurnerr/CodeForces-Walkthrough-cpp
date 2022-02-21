//N. Numbers Histogram
#include <iostream>
using namespace std;

int main ()
{
    char s;
    int n;

    cin >> s >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        for (int j = 1; j <= x; j++)
            cout << s;

        cout <<"\n";

    }


    return 0;
}
