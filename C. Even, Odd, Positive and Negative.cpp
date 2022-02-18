//C. Even, Odd, Positive and Negative
#include <iostream>
using namespace std;

int main ()
{
    int n, countPositive{0}, countNegative{0}, countEven{0}, countOdd{0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x%2 == 0)
        {
            countEven++;

            if(x > 0)
                countPositive++;
            else if ( x < 0)
                countNegative ++;

        }
        else
        {
            countOdd++;

            if(x > 0)
                countPositive++;
            else if ( x < 0)
                countNegative ++;


        }
    }

    cout << "Even: " << countEven <<"\n";
    cout << "Odd: " << countOdd <<"\n";
    cout << "Positive: " << countPositive <<"\n";
    cout << "Negative: " << countNegative <<"\n";

    return 0;
}
