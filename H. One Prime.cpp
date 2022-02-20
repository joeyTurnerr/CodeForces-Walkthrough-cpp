//H. One Prime
#include <iostream>
using namespace std;

int main ()
{
    int n;
    bool isPrime;

    cin >>n;

    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            isPrime = false;
            break;
        }
        else
            isPrime = true;
    }

    (isPrime || n ==2)? cout <<"YES": cout <<"NO";

    return 0;
}
