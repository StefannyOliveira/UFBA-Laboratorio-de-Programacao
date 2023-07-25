#include <iostream>
#include <vector>

using namespace std;

void verificar(const vector<vector<int>>& cinema) {
  for (int i = 0; i < cinema.size(); i++) {
    for (int j = 0; j < cinema[i].size() - 1; j++) {
      if (cinema[i][j] == 0 && cinema[i][j] == cinema[i][j + 1]) {
        cout << "Fileira: " << i + 1 << endl;
        cout << "Assentos: " << j + 1 << " e " << j + 2 << endl;
        return;
      }
    }
  }
}

int main() {
  int fileiras, assentos, i, j;
  cin >> fileiras >> assentos;
  
  vector<vector<int>> cinema(fileiras, vector<int>(assentos));
  for (i = 0; i < fileiras; i++) {
    for (j = 0; j < assentos; j++) {
      cin >> cinema[i][j];
    }
  }
  
  verificar(cinema);
  
  return 0;
}
