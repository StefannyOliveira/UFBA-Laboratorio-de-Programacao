#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  float A, B, b, h;

  cin >> B >> b >> h;

  A = ((B + b) * h)/2;

  cout << "A=" << fixed << setprecision(1) << A << endl;
  
  return 0;
}