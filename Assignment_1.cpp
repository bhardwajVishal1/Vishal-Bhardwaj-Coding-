#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        bool unique = true;

        for (int j = 0; j < s.size(); j++) {
            if (i != j && s[i] == s[j]) {
                unique = false;
                break;
            }
        }

        if (unique == true) {
            cout << s[i];
            return 0;
        }
    }

    cout << -1;

    return 0;
}