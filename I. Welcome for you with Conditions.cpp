//I. Welcome for you with Conditions
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    (a>=b)? cout<<"Yes" : cout<< "No";

    return 0;

    // another solution
    if (a>=b)
        cout<<"Yes";
    else
        cout<<"No";
}
