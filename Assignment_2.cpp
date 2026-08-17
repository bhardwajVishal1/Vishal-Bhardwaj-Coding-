#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        sum = sum + num;
    }

    int total = (n + 1) * (n + 2) / 2;

    cout << total - sum;

    return 0;
}