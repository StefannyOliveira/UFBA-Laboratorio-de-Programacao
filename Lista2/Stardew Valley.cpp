#include <iostream>
#include <vector>

using namespace std;

int main() {
  int recebidos, par = 0, impar = 0;

  cin >> recebidos;
    
  vector<int> vetor(recebidos);
  for (int i = 0; i < recebidos; i++) {
      cin >> vetor[i];
  }
  for (int i = 0; i < vetor.size(); i+=2) {
    par = par + vetor[i];
  }
  for (int i = 1; i < vetor.size(); i+=2) {
    impar = impar + vetor[i];
  }

  if(par < impar) {
      cout << "Modo Hard" << endl;
    }
    else {
      cout << "Vou ajudar" << endl;
    }

  return 0;
}