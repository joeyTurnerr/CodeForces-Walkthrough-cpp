//B. Let's use Getline
#include <iostream>
using namespace std;

int main ()
{
    string s;
    getline(cin,s,'\\');
    cout << s;

    return 0;
}
