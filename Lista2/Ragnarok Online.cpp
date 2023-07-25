#include <iostream>
#include <vector>

using namespace std;

int main() {
  int tipos, mult;

  cin >> tipos;
  
  vector<int> vetor(tipos);
  for (int i = 0; i < tipos; i++) {
    cin >> vetor[i];
  }
  
  cin >> mult;
  
  for (int i = 0; i < vetor.size(); i++) {
    vetor[i] *= mult;
  }

  for (int i = 0; i < vetor.size(); i++) {
    if (i < tipos - 1) {
      cout << vetor[i] << " ";
    } 
    else {
      cout << vetor[i] << endl;
    }
      
  }
  
  return 0;
}