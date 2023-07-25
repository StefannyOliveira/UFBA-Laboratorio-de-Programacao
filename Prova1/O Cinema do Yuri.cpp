#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int total, quantidade, assento = 0, livres;

  cin >> total;
  
  vector<int> todos;
  for (int i = 1; i <= total; i++) {
    todos.push_back(i);
  }
 
  cin >> quantidade;

  if (quantidade > 0) {
    vector<int> ocupados(quantidade);
    for (int i = 0; i < quantidade; i++) {
      cin >> ocupados[i];
    }
  
    for (const auto& elemento : ocupados) {
          todos.erase(remove(todos.begin(), todos.end(), elemento), todos.end());
      }
  }
  
  for ( int i = 0; i < todos.size(); i++) {
    if (i < (todos.size()) - 1) {
      cout << todos[i] << " ";
    }
    else {
      cout << todos[i] << endl;
    }
  }

return 0;  
}