//(Optimized)699A-Launch of Collider
#include <iostream>
#include <climits>
//#include <algorithm>
#include <deque>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d,t; cin >> n;
    string s;
    deque <int> distance;

    //deque <int> time;
    int minimum = INT_MAX;
    bool empty = true;



    cin >> s;
    cin >> d;
    distance.push_back(d);

    for (int i = 1; i < n; i++)
    {
        cin >> d;
        distance.push_back(d);
        if(s[i] == 'L' && s[i-1] == 'R')
        {
            t = ( distance[i] - distance[i-1] ) / 2;
           // time.push_back(t);
           minimum = min(minimum, t);
           empty = false;

        }

    }
    
    //we don't need to store the time values we only need the minimum of it
    //Solution:
            // make a minimum variable with large value like 10^9
            // and then compare it with other value
        
    //Old Solution
   /* sort(time.begin(), time.end());
    if (!time.empty())
        cout << time[0];
    else
        cout << -1;*/
    if (empty)
        cout << -1;
    else
        cout << minimum;
    
}
