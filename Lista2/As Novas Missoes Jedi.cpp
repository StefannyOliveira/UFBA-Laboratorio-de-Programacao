#include <iostream>

using namespace std;

int main() {
  int missoes, xp, yoda, luke, ahsoka, total;
  
  cin >> missoes >> xp;
  cin >> yoda >> luke >> ahsoka;

  total = missoes * xp;

  yoda = yoda + total;
  luke = luke + total;
  ahsoka = ahsoka + total;

  cout << "Yoda " << yoda << "\nLuke " << luke << "\nAhsoka " << ahsoka <<endl;

  return 0;
}
