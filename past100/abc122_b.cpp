#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    for (size_t i = S.length(); i > 0; i--) {
        for (size_t j = 0; j < S.length() - i + 1; j++) {
            auto subS = S.substr(j, i);
            auto valid = all_of(subS.begin(), subS.end(), [](auto x) {
                set<char> validChar{'A', 'T', 'G', 'C'};
                return validChar.find(x) != validChar.end();
            });
            if (valid) {
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}
