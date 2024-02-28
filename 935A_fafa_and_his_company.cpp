#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int l = 1; l <= n / 2; l++) {
        if (n % l == 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
