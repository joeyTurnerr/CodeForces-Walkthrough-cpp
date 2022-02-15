//P. First digit !
#include <iostream>
using namespace std;

int main ()
{
    int x;

    cin >> x;
    ((x/1000)%2 == 0)? cout<<"EVEN" : cout << "ODD";
    return 0;
}
