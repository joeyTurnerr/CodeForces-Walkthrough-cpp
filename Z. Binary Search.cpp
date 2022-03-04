//Z. Binary Search
#include <bits/stdc++.h>
using namespace std;


int binarySearch (int arr[], int l, int h, int key)
{
    while (l <= h)
    {
        int m = l+ (h-l)/2;

        if (key == arr[m])
        {
            return m+1;
        }

        if (key > arr[m])
        {
            l = m+1;
        }
        else
        {
            h = m - 1;
        }
    }
    return 0;
}

int main ()
{
    int n, t, q;
    cin >> n >> t;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    while (t--)
    {
        cin >> q;

        int result = binarySearch(a, 0, n-1, q);

        if (result)
        {
            cout << "found\n";
        }
        else
        {
            cout << "not found\n";
        }

    }

    return 0;
}
