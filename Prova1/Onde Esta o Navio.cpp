#include <iostream>

using namespace std;

int main() {
  
 int x, y, v = 0;

  cin >> x >> y;
  
  if ((x > 0) && (x < 100) && (y > 0) && (y < 100)) {
      v = 1;
      if ((x < 71) && (y < 71)) {
      cout << "Coordenada valida e o navio esta perto" << endl;
      }
      else if ((x > 70) || (y > 70)) {
        cout << "Coordenada valida e o navio esta longe" << endl;
      }
  }      
  else {
    cout << "Coordenada invalida" << endl; 
  }

  return 0;
}
