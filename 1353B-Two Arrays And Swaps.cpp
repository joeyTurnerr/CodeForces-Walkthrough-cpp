//1353B-Two Arrays And Swaps
#include <bits/stdc++.h>
using namespace std;

int a[30+5], b[30+5];



int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k, n;
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }


        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }

        sort(a, a + n);
        sort(b, b + n);
        reverse(b, b+n);
        int sum{0};


        for (int l = 0; l < k; l++)
        {
            if (b[l] >= a[l])
                a[l]= b[l];
        }

        for (int i = 0; i < n; i++)
            sum += a[i];

        cout << sum << "\n";
    }

    return 0;
}
