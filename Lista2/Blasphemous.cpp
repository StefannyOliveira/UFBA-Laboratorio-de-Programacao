#include <iostream>
#include <vector>

using namespace std;

int main() {
  int fases, vida, vidaatual, dano;

  cin >> fases;

  int vetor[fases];
  for (int i = 0; i < fases; i++) {
    cin >> vetor[i];
  }
  
  cin >> vida;
  vidaatual = vida;
  
  for (int i = 0; i < fases; i++) {
    dano = vetor[i];
    if (vidaatual > 0) {
      if (dano == 1) {
        vidaatual = vida;
      } else if (dano > vidaatual) {
        vidaatual = 0;
      } else {
        vidaatual = vidaatual - dano;        
      }
    }
  };
   

  if (vidaatual > 0) {
    cout << "Yes, you can" << endl;
  } else {
    cout << "You Died" << endl;
  }
      
  return 0;
}