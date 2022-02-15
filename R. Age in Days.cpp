//R. Age in Days
#include <iostream>
using namespace std;

int main ()
{
    int n, years, months, days;

    cin >> n;

    years = n/365;
    months = (n - years*365)/30;
    days = n - (months*30 + years*365);

    cout << years <<" years\n" << months << " months\n" << days << " days\n";

    return 0;
}
