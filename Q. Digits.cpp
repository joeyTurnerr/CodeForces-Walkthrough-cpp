//Q. Digits
#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    int x;

    cin >>x;

    for (int i =0; i < x; i++)\
    {
        string number;
        cin >> number;

        for (int j = number.length()-1; j >= 0; j--)
        {
            cout << number[j] << " ";
        }
        cout << "\n";

    }

    return 0;
}
