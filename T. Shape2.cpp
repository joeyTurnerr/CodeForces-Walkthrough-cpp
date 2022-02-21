//T. Shape2
#include <iostream>
using namespace std;

int main ()
{
    int x;
    int astrek = 1;

    cin >>x;
    for (int i = x; i > 0; i--)
    {
        for (int j = i-1; j > 0; j--)
        {
            cout << " ";
        }

        for (int s = 1; s <=(2*astrek-1); s++)
        {
            cout << "*";
        }
        astrek++;
        cout << endl;
    }

    return 0;
}
