//492A-Vanya and Cubes

 #include <iostream>
 using namespace std;

 int main ()
 {
    int cubes, sum{0}, remain;

    cin >> cubes;
    remain = cubes;
    for (int i = 1; i <=  cubes; i++)
    {
        sum += i;
        remain -= sum;
        if (remain < 0)
        {
            cout << i -1;
            break;
        }
        else if (remain == 0)
        {
            cout << i;
            break;
        }

    }
    return 0;
 }
