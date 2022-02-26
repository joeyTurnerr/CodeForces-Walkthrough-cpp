//H. Sorting
#include <bits/stdc++.h>
using namespace std;

void selectionSort (int arr[], int n)
{
    for (int i = 0; i < n-1; i++) //1 3 2
    {
        int minIndx = i; // 0

        for (int j = i+1; j < n; j++) //1 0
        {
            if (arr[j] < arr[minIndx]) // 1 0
            {
                minIndx = j;

            }
        }
        swap(arr[i], arr[minIndx]);

    }
}

int arr[1000+5];

int main ()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}
