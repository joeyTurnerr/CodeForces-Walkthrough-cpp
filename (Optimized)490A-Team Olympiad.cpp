 //(Optimized)490A-Team Olympiad
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main ()
{
    int n; cin >> n;
    vector <int> vec(n);
    vector <int> one;
    vector <int> two;
    vector <int> three;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];

        if(vec[i] == 1)
            one.push_back(i+1);
        if(vec[i] == 2)
            two.push_back(i+1);
        if(vec[i] == 3)
            three.push_back(i+1);
    }
    int w = min(one.size(), min(two.size(), three.size()));
    cout << w << "\n";
    for (int i = 0; i < w; i++)
    {
        cout << one.back() << " ";
        one.pop_back();
        cout << two.back() << " ";
        two.pop_back();
        cout << three.back() << "\n";
        three.pop_back(); 

    }

    return 0;
}
