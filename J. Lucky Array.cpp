//J. Lucky Array
#include <bits/stdc++.h>
using namespace std;

int arr[1000+5];

int main ()
{
    int n, counter{0};

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);


    for (int i = 0; i < n; i++)
    {
        if (arr[0]== arr[i])
        {
            counter++;
        }
    }

    if (counter % 2 == 0)
        cout << "Unlucky";
    else
        cout << "Lucky";

    return 0;
}
