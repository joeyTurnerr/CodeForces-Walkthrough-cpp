//490A-Team Olympiad
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, counteri{0}, counterii{0}, counteriii{0}; 
    int one, two, three;
    cin >>n;
    vector <int> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];

        if (vec[i] == 1)
            counteri++;
        if (vec[i] == 2)
            counterii++;
        if(vec[i] == 3)
            counteriii++;
    }
    int w = min(counteri,min(counterii,counteriii));
    cout << w <<"\n";
    for (int i = 0; i < w; i++)
    {
        for (int i = 0; i < n;i++)
        {
            if (vec[i] == 1){
                one = i;
                }
            if (vec[i] == 2){
                two = i;
            }
            if (vec[i] == 3)
            {
                three = i;
            }
        }
        cout << one+1 << " " << two+1 << " " << three+1 <<"\n";
        vec[one] = 0;
        vec[two] = 0;
        vec[three] = 0;
    }
    return 0;
}
