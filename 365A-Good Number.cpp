//365A-Good Number
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int t; cin >>t;
    int counter{0};
    char q; cin >>q;
    while(t--)
    {
        bool good = true;
        string s; cin >>s;
        for (char i ='0'; i <= q; i++)
        {
            if (s.find(i) == string::npos)
            {
                good = false;
                break;
            }
        }
        if (good) counter++;
    }
    cout << counter;

    return 0;
}
