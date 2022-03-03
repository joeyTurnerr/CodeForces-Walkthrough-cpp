//S. Search In Matrix
#include <iostream>
using namespace std;

int arr[105][105];

int main ()
{
    int n,m,num,flag{0};

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cin >> num;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (num == arr[i][j])
            {
                flag = 1;
            }
        }
    }
    (flag)? cout << "will not take number": cout << "will take number";
   
    return 0;
}
