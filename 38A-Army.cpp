//38A-Army
#include <iostream>
using namespace std;

int arr[100+5];

int main ()
{
    int n, a, b, sum{0};
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> a >> b;

    for (int j = a; j < b; j++)
    {
        sum+= arr[j];
    }
    cout << sum;
    return 0;
}
