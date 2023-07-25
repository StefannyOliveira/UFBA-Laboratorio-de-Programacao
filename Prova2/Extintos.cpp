#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

void verificar(const unordered_set<string>& animais, const vector<string>& requisitados) {
  for (const string& elemento : requisitados) {
    if (animais.count(elemento) > 0) {
      cout << elemento << " vive!" << endl;
    } else {
      cout << elemento << " foi extinto :(" << endl;
    }
  }
}

int main() {
  int animais, requisitados, i;
  
  cin >> animais;
  cin.ignore();
  
  unordered_set<string> vetoranimais;
    for (i = 0; i < animais; i++) {
      string nome;
      getline(cin, nome);
      vetoranimais.insert(nome);
  }

  cin >> requisitados;
  cin.ignore();
     
  vector<string> vetorrequisitados(requisitados);
  for (i = 0; i < requisitados; i++) {
     getline(cin, vetorrequisitados[i]);
  }

  verificar(vetoranimais, vetorrequisitados);
  
  return 0;
}