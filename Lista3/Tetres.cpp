#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

bool certinho(const string& fileira, const string& proxfileira) {
    for (int i = 0; i < 3; i++) {
        if (fileira[i] == proxfileira[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int largura, altura;
    cin >> largura >> altura;

    vector<string> blocos(largura);
    for (int i = 0; i < largura; i++) {
        cin >> blocos[i];
    }

    stack<string> torre; 
    int pontos = 0; 

    for (int i = 0; i < largura; i++) {
        bool combina = false;
        string atual = blocos[i];

        if (!torre.empty()) {
            if (certinho(atual, torre.top())) {
                combina = true;
                torre.pop();
                pontos += 10;
            }
        }

        if (!combina) {
            if (torre.size() >= altura) {
                cout << "game over" << endl;
                return 0;
            }

            torre.push(atual);
        }
    }

    if (torre.size() == altura) {
        cout << "game over" << endl;
    } else {
        cout << pontos << endl;
    }

    return 0;
}
