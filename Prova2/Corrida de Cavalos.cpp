#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void verificar(const vector<int>& vetorcavalos, int cavalo) {
  auto it = find(vetorcavalos.begin(), vetorcavalos.end(), cavalo);
  if (it != vetorcavalos.end()) {
    int posicao = distance(vetorcavalos.begin(), it) + 1;
    cout << posicao - 1 << endl;
  }
}

int main() {
  int i, corridas, quantcavalos, cavalo;
  cin >> corridas;
  
  for (i = 0; i < corridas; i++) {
    cin >> quantcavalos;
    
    vector<int> vetorcavalos(quantcavalos);
    for (int j = 0; j < quantcavalos; j++) {
       cin >> vetorcavalos[j];
    }
    
    cin >> cavalo;
    
    verificar(vetorcavalos, cavalo);
  }

  return 0;
}