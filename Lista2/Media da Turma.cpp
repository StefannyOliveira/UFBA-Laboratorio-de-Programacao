#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
  int nota, total, media;
  string ent;

  while (true) {
    vector<int> vetor;
    total = 0;

    while (cin >> ent && ent != "FIM") {
      nota = stoi(ent);
      vetor.push_back(nota);
    }

    if (vetor.empty()) {
      break;
    }

    sort(vetor.begin(), vetor.end());

    if (vetor.size() == 1) {
      media = vetor[0];
    } else if (vetor.size() == 2) {
      total = accumulate(vetor.begin(), vetor.end(), 0);
      media = total / 2;
    } else {
      total = accumulate(vetor.begin() + 1, vetor.end() - 1, 0);
      media = total / (vetor.size() - 2);
    }

    cout << media << endl;
  }

  return 0;
}
