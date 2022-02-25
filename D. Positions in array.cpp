//D. Positions in array
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
    }
    for (int j =0; j < n; j++)
    {
        if (arr[j] <= 10)
        {
            cout <<"A[" << j <<"] = "<< arr[j] << "\n";
        }
    }
    return 0;
}
