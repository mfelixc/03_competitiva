#include <iostream>
using namespace std;
 
int main() {
    long long n, x, suma = 0;
    cin >> n;
    for (long long i = 0; i < n - 1; i++) {
        cin >> x;
        suma = suma + x;
    }
    cout << n * (n + 1) / 2 - suma << "\n";
    return 0;
}