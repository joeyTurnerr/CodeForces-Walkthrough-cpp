//T. Matrix
#include <iostream>
using namespace std;
int arr[100][100];
int main ()
{
    int n, sumA{0}, sumB{0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        sumA += arr[i][i];
        sumB += arr[i][n-1-i];

    }

    cout << abs(sumA-sumB);
}
