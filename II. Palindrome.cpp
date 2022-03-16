//II. Palindrome
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{
    string s,r;
    cin >> s;
    r = s;
    reverse(r.begin(),r.end());
    
    if (r == s)
        cout << "YES";
    else
        cout << "NO";
        
    return 0;
}
