#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int musicas, i;
  string nome;

  cin >> musicas;
  cin.ignore();

  vector<string> vetor(musicas);
  for (i = 0; i < musicas; i++) {
      getline (cin, vetor[i]);
  }

  stable_sort(vetor.begin(), vetor.end());

  for (i = 0; i < vetor.size(); i++) {
      cout << vetor[i] << endl;
  }
  return 0;
}
