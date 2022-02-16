//C. Next Alphabet
#include <iostream>
using namespace std;

int main ()
{
    char x;

    cin >>x;

    int nextLetter = (int) x + 1;
    (nextLetter > 122)? cout <<'a': cout << (char)nextLetter;
    return 0;
}
