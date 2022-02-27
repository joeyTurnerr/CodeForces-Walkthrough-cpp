//509A-Maximum in Table
#include <iostream>
using namespace std;

int a[10+5][10+5];

int main ()
{
    int n;
    a[1][1] = 1;

    
    cin >> n;
    
    for (int i =1; i <= n+1; i++)
    {
        for (int j = 2; j <= n+1; j++)
        {
            a[i][j] = a[i-1][j]+ a[i][j-1];
        }
    }
    
    cout << a[n][n+1];
    
    return 0;
}
