//591A - Wizards' Duel
#include <iostream>
using namespace std;
     
int main ()
{
  int l,p,q;
     
  cin >> l >> p >> q;
  double total = (double)l / (p+q);
  cout << total * p ;
     
  return 0;
     
  //Another Solution
     
  double perc = (double) p / (p+q);
  cout << perc * l;
}
