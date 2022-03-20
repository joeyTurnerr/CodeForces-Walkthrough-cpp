//1015C-Songs Compression
#include <iostream>
#include <algorithm>
using namespace std;
int a[100000];
int b[100000];
int main ()
{
    int n, m,counter{0};
    unsigned long long sum{0} ,sum2{0};
    cin >> n >> m;
    
    for (int i =0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];

        sum += a[i];
        sum2 += b[i];
        b[i] = (a[i]-b[i]);
    }

    if (sum <= m)
        cout << 0;
    else if (sum2 > m)
        cout << -1;
    else
    {
         sort (b, b+n);
         int j =n-1;
         while (sum > m)
         {
            if (j==n) break;
            sum-=b[j];
            counter++;
            j--;
         }
         cout << counter;
    }


    return 0;
}
