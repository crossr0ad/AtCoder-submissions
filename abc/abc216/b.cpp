#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N), T(N);
    for (size_t i = 0; i < N; i++) cin >> S[i] >> T[i];

    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            if (i == j) continue;

            if (S[i] == S[j] && T[i] == T[j]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}
