#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }

    long long power = 1;

    if (N % 3 == 0) {
        for (int i = 0; i < N / 3; i++) {
            power *= 3;
        }
    }
    else if (N % 3 == 1) {
        power = 4;

        for (int i = 0; i < (N - 4) / 3; i++) {
            power *= 3;
        }
    }
    else {
        power = 2;

        for (int i = 0; i < (N - 2) / 3; i++) {
            power *= 3;
        }
    }

    cout << power << endl;

    return 0;
}
