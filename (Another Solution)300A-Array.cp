//(Another Solution)300A-Array
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int  main ()
{
    int n,x; cin >> n;
    deque <int> dq;
    for (int i = 0; i < n; i++){
        cin >> x;
        dq.push_back(x);
    }
    sort(dq.begin(), dq.end());
    cout << 1 << " " << dq.front() << "\n";
    dq.pop_front();
    if (dq.back() > 0)
    {
        cout << 1 << " " << dq.back() << "\n";
        dq.pop_back();
        cout << dq.size() << " ";
        for (int i = 0;i < dq.size();i++)
            cout << dq[i] << " ";

    }
    else
    {
        cout << 2 << " " << dq[0] << " " << dq[1] <<"\n";
        dq.pop_front();dq.pop_front();
        cout << dq.size() << " ";
        for (int i = 0; i < dq.size(); i++)
            cout << dq[i] << " ";
    }
    return 0;
}
