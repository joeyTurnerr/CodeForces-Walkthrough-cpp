//E. Lowest Number
#include <bits/stdc++.h>
using namespace std;

int a[1000+5], b[1000+5];

int main ()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);

    for (int j = 0; j < n; j++)
    {
        if (b[0] == a[j])
        {
            cout << a[j] << " " << j+1 ;
            break;
        }

    }

    return 0;
}
