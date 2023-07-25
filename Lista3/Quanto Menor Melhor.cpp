#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparar(const string& palavra1, const string& palavra2) {
    if (palavra1.length() != palavra2.length()) {
        return palavra1.length() < palavra2.length();
    }
    return palavra1 < palavra2;
}

string traduzir(const string& frase) {
    stringstream ss(frase);
    string palavra;
    vector<string> palavras;

    while (ss >> palavra) {
        string* nova = new string(palavra);
        palavras.push_back(*nova);
        delete nova;
    }

    sort(palavras.begin(), palavras.end(), comparar);

    string traducao;
    for (size_t i = 0; i < palavras.size(); ++i) {
        traducao = traducao + palavras[i] + " ";
    }

    return traducao;
}

string fim(const string& frase) {
    return traduzir(frase);
}

int main() {
    string frase;
    getline(cin, frase);

    string traducao = fim(frase);
    cout << traducao << endl;

    return 0;
}
