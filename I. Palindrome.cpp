//I. Palindrome
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x, rev;

    cin >> x;

    for (int i = x.length()-1; i >= 0; i--)
    {
        rev += x[i];

    }

    int outputValue = stoi(rev);
    cout << outputValue <<"\n";

    (rev == x)? cout << "YES":cout << "NO";

    return 0;
}
