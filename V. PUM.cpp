//V. PUM
#include <iostream>
using namespace std;

int main ()
{
    int n, counter {1};

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << counter << " ";
            counter++;
        }
        cout << "PUM\n";
        counter ++;
    }

}
