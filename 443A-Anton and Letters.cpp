//443A-Anton and Letters
#include <bits/stdc++.h>
using namespace std;
char arr[1005];
int main ()
{
    string s; getline(cin, s);
    int counter{0};

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (s.find(i) != string::npos)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}
