#include <iostream>
using namespace std;

int main() {
    long long n, con = 0;
    cin >> n;

    while (n > 0) {
        n /= 5;
        con += n;
    }

    cout << con;
    return 0;
}