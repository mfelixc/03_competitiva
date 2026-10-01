#include <iostream>
using namespace std;

int main() {
    long long n, x[200000], cont = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 1; i < n; i++) {
        if (x[i] < x[i - 1]) {
            cont += x[i - 1] - x[i];
            x[i] = x[i - 1];
        }
    }

    cout << cont;
    return 0;
}
