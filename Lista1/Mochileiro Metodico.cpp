#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n, i, tamanho;
  cin >> n;
  
  vector<int> vetor(n);
  for (i = (n-1); i >= 0; i--) {
      cin >> vetor[i];
  }

  for (int i = 0; i < vetor.size(); i++) {
    cout << vetor[i] << " ";
  }
  return 0;
}
