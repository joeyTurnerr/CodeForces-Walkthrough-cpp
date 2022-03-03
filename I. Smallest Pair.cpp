//I. Smallest Pair
#include <iostream>
using namespace std;

int arr[105];

int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = arr[0]+ arr[1];
        int sub = 1;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i]+ arr[j] < sum)
                {
                    sum = arr[i]+ arr[j];
                    sub = (j+1)-(i+1);
                }
            }
        }

        cout << sum + sub << "\n";
    }

    return 0;
}
