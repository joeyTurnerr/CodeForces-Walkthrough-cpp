//C. Replacement
#include <iostream>
using namespace std;

int arr[1000+5];

int main ()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] > 1)
            arr[i] = 1;

        else if (arr[i] < 0)
            arr[i] = 2;
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}
