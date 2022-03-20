//560A-Currency System in Geraldion
#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int n;
    bool one = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num; cin >> num;

        if (num == 1) one = true;
    }

    (one)? cout << -1 : cout << 1;

    return 0;
    
    //another solution
    int n;
    int arr[1000];
    bool none = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1) none = true;
    }
    if (none)
        cout << -1;
    else
    {
        cout << 1;
    }

}
