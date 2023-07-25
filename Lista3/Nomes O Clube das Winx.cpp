#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void ordenarNomes(vector<string>* nomes) {
    stable_sort(nomes->begin(), nomes->end());
}

int main() {
    int alunas, i;
    string nome;

    cin >> alunas;
    cin.ignore();

    vector<string> vetor(alunas);
    for (i = 0; i < alunas; i++) {
        getline(cin, vetor[i]);
    }

    ordenarNomes(&vetor);

    for (i = 0; i < vetor.size(); i++) {
        cout << vetor[i] << endl;
    }

    return 0;
}

