#include <iostream>

using namespace std;

int main() {
  int s_inseridos, s_abatidos, abates, vida, m_abatidos, assistencias, pontos;

  cin >> s_inseridos >> s_abatidos >> abates >> vida >> m_abatidos >> assistencias;

  pontos = s_inseridos + s_abatidos + abates + vida + m_abatidos + assistencias;

  if (pontos >= 250) {
    cout << "S+" << endl;
  }
  else if (pontos >= 200) {
    cout << "S" << endl;
  }
  else if (pontos >= 180) {
    cout << "S-" << endl;
  }
  else if (pontos >= 150) {
    cout << "A+" << endl;
  }  
  else if (pontos >= 100) {
    cout << "A" << endl;
  }  
  else if (pontos >= 80) {
    cout << "A-" << endl;
  }  
  else if (pontos >= 60) {
    cout << "B+" << endl;
  }
  else if (pontos >= 40) {
    cout << "B" << endl;
  }
  else {
    cout << "B-" << endl;
  }

  return 0;
}
