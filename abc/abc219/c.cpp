#include <bits/stdc++.h>
using namespace std;

int main() {
    string X;
    int N;
    cin >> X >> N;

    vector<string> S(N);
    for (size_t i = 0; i < N; i++) {
        cin >> S[i];
    }

    sort(S.begin(), S.end(), [&X](auto x, auto y) {
        for (size_t i = 0; i < min(x.length(), y.length()); i++) {
            if (x[i] == y[i]) continue;
            return X.find(x[i]) < X.find(y[i]);
        }
        return x.length() < y.length();
    });

    for (auto &&s : S) {
        cout << s << endl;
    }
}
