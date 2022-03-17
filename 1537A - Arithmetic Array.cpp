//1537A - Arithmetic Array
#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum{0}; cin >> n;

        for (int i = 0; i < n; i++)
        {
                int num;
                cin >> num;
                sum+= num;
        }
        if (sum == n)
            cout << 0 << "\n";
        else if (sum > n)
            cout << sum - n <<"\n";
        else
            cout << 1 << "\n";
    }

    return 0;
}
