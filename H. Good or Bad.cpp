//H. Good or Bad
#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int flag1 = s.find("010");
        int flag2 = s.find("101");

        if (flag1 !=-1 || flag2 !=-1)
            cout << "Good\n";
        else
            cout <<"Bad\n";
    }


    return 0;
}
