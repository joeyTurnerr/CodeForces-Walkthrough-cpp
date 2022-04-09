//699A-Launch of Collider
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d,t; cin >> n;
    string s;
    deque <int> distance, time;
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
            time.push_back(t);
        }

    }
    
    sort(time.begin(), time.end());
    if (!time.empty())
        cout << time[0];
    else
        cout << -1;
    
}
