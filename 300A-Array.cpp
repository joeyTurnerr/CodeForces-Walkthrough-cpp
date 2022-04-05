//300A-Array
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int  main ()
{
    int n,x;
    cin >> n;
    vector <int> vec;

    for (int i = 0; i < n; i++){
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    if (vec.back() > 0)
    {
        cout << 1 << " " << vec.front() << "\n";

        cout << 1 << " " << vec.back() << "\n";

        cout << vec.size()-2  << " ";
        for (int i = 1; i < vec.size() -1;i++)
            cout << vec[i] <<" ";

        cout << "\n";

 
    }
    else{
        cout << 1 << " " << vec.front()<<"\n";
        cout << 2 << " " << vec[1] << " " << vec[2] << "\n";
        cout << vec.size()-3 << " ";
        for (int i = 3; i < vec.size();i++)
            cout << vec[i] << " ";
        cout << "\n";
    }

    return 0;
}
