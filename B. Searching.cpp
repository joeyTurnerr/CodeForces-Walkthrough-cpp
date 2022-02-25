//B. Searching
#include<iostream>
using namespace std;

int main ()
{
    int n, x, f;
    bool found = 0;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> f;

    for (int j =0; j < n; j++)
    {
        if (f == arr[j])
        {
            found = true;
            cout << j;
            break;
        }
    }
    if (found == 0)
        cout << -1;

    return 0;
}
