//R. Sequence of Numbers and Sum
#include <iostream>
using namespace std;

int main ()
{
    int x = 1, y =1 , sum{0};


    while (true)
    {
        cin >> x >> y;

        if (x<=0 || y <=0)
            break;


        for (int i = min(x,y); i <= max(x,y); i++)
        {
            cout << i << " ";
            sum +=i;
        }
        cout << "sum ="<< sum <<"\n";
        sum = 0;
    }

    return 0;
}
