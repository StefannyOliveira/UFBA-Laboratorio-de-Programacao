#include <iostream>
#include <string>

using namespace std;

int main() {
  int altura, n, null;
  cin >> altura;
  string d = ">";
  string desenho;
  
  for (int x = 1; x <= altura; x++) {
    string piramide = string(x, '#');
    n = altura - x;
    string null = string(n, '>');
    desenho = null + piramide;
    cout << desenho << endl;
  }
  return 0;  
}
