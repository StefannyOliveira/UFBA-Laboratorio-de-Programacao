#include <iostream>

using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;

  if(A == B && A != C) {
    cout << "C" << endl;
  }
  else if(B == C && B != A){
    cout << "A" << endl;
  }
  else if(A == C && C != B){
    cout << "B" << endl;
  }
  else{
    cout << "Empate" << endl;
  }
  
  return 0;
}