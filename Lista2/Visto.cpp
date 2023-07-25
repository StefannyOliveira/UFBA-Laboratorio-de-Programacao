#include <iostream>

using namespace std;

int main() {
  int processo;

  cin >> processo;

  if (processo % 42 == 0) {
    cout << "Sim" << endl;
  }
  else {
    cout << "Nao" << endl;
  }

  return 0;
}