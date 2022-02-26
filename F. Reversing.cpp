//F. Reversing
#include <iostream>
using namespace std;

int a[1000+5];

int main ()
{
    int  n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    for (int j =0 ; j < n; j++)
    {
        cout << a[n-j] << " ";
    }
    
    return 0;
}
