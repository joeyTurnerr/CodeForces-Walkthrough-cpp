//231A-Team

#include <iostream>
using namespace std;

int main ()
{
    int n, a, b, c, problem{0};
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        bool twice = (a == b && b == 1)  || (c == b && b == 1) || (a == c && c == 1) ;
        bool full =  (a == b && b == c && a == 1);

        if (twice || full)
            problem++;
    }
    cout << problem;

    return 0;
    // another solution
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;

        if (a+b+c >= 2)
            problem++;
    }
}
