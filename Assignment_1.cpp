#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count[256] = {0};

    for (int i = 0; i < s.length(); i++) {
        count[s[i]] = count[s[i]] + 1;
    }

    for (int i = 0; i < s.length(); i++) {
        if (count[s[i]] == 1) {
            cout << s[i];
            return 0;
        }
    }

    cout << -1;

    return 0;
}