#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;

    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;

    for (int i = 11; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int i;
    int* ptr_i = &i;  // Ponteiro para i

    do {
        cin >> *ptr_i;

        if (*ptr_i == 0) {
            break;
        } else if (isPrime(*ptr_i)) {
            cout << "O numero de cadeiras eh primo!" << endl;
        } else {
            cout << "O numero de cadeiras nao eh primo!" << endl;
        }

    } while (*ptr_i != 0);

    return 0;
}
