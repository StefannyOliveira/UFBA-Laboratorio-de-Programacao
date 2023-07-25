#include <iostream>

using namespace std;

int main() {
  long long familiares, quantidade, bolinhas, q_atual;

  cin >> familiares >> quantidade;
  bolinhas = quantidade * 2;

  for (int i = 1; i < familiares; i++) {
    q_atual = quantidade + bolinhas;
    quantidade = q_atual;
    bolinhas = bolinhas * 2;
  }
  cout << q_atual << endl;
}
