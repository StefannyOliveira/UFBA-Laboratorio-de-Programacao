#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void troca(const unordered_map<int, int>& total, const vector<int>& consultas) {
    for (const int& indentdif : consultas) {
        if (total.find(indentdif) == total.end()) {
            cout << "Quero" << endl;
        } else if (total.at(indentdif) == 1) {
            cout << "Apenas uma" << endl;
        } else {
            cout << "Trocar" << endl;
        }
    }
}

int main() {
    int quantfig, consultas, figurinha, x;
  
    unordered_map<int, int> total;
    cin >> quantfig;
    vector<int> quantcada(quantfig);
    vector<int> figurinhas(quantfig);

    for (x = 0; x < quantfig; x++) {
        cin >> figurinhas[x];
    }for (x = 0; x < quantfig; x++) {
        cin >> quantcada[x];
    }
    
    cin >> consultas;
    for (x = 0; x < quantfig; x++) {
        total[figurinhas[x]] = quantcada[x];
    }vector<int> vetortroca(consultas);
    for (x = 0; x < consultas; x++) {
        cin >> vetortroca[x];
    }
    
    troca(total, vetortroca);

    return 0;
}