//M. Capital or Small or Digit
#include <iostream>
using namespace std;

int main ()
{
    char x;

    cin >> x;

    if (x>=65)
        (x<=90)? cout <<"ALPHA"<<"\n"<<"IS CAPITAL":cout <<"ALPHA"<<"\n"<<"IS SMALL";
    else
        cout << "IS DIGIT";

    return 0;

}
