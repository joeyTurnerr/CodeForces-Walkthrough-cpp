//V. Frequency Array
#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main ()
{
    int n, m, counter{0};

    cin >> n >> m;

    for (int i =0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int i = 0;
    for (int j = 1; j <= m; j++)
    {
        for (; i < n; i++)
        {
            if (j == arr[i])
            {
                counter++;
            }
            else if (j < arr[i])
            {
                break;
            }
        }
        cout << counter << '\n';
        counter = 0;
    }
    return 0;
}
