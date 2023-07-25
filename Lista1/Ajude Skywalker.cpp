#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int A, B, C, D, E, total;

  cin >> A >> B >> C >> D >> E;

  total = A -(B + C + D + E);

  cout << total << endl;
  
  return 0;
}