    //80A-Panoramix's Prediction
    #include <iostream>
    using namespace std;

    bool isPrime (int x)
    {
        if (x == 1)
            return false;
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
                return false;
        }
        return true;
    }


    int main ()
    {
        int n, m, sum{0};

        cin >> n >> m;


        for (int i = n; i <= m; i++)
        {
            if (isPrime(i))
            {
                sum+=i;
            }
        }
        (sum == (n+m))? cout << "YES": cout << "NO";

        return 0;}
