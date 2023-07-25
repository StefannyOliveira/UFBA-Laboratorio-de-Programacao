#include <iostream>
#include <vector>

using namespace std;

void dividir(const vector<int>& acertos, const vector<int>& utilitarios, vector<int>& resultado) {
    int tamanho = utilitarios.size();
   
    
    for (int i = 0; i < tamanho; i++) {
      if (utilitarios[i] != 0) {
           resultado[i] = (acertos[i] * 100) / utilitarios[i];
        } else {
            resultado[i] = 0;
        }
    }

}

int main() {
  int quantidade;
  cin >> quantidade;
  
  vector<int> utilitarios(quantidade);
  for (int i = 0; i < quantidade; i++) {
    cin >> utilitarios[i];
  }
  vector<int> acertos(quantidade);
  for (int i = 0; i < quantidade; i++) {
    cin >> acertos[i];
  }
  
  vector<int> resultado(quantidade);
  
  dividir(acertos, utilitarios, resultado);

  for ( int i = 0; i < resultado.size(); i++) {
    if (i < (resultado.size()) - 1) {
      cout << resultado[i] << " ";
    }
    else {
      cout << resultado[i] << endl;
    }
  }
  return 0;
}

