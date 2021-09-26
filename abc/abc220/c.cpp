#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll N;
    cin >> N;

    vector<ll> A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }

    ll X;
    cin >> X;

    auto sumA = accumulate(A.begin(), A.end(), 0LL);

    if (X % sumA == 0) {
        cout << X / sumA * N + 1 << endl;
        return 0;
    }
    auto numA = X / sumA;

    X -= numA * sumA;

    for (ll i = 0; i < N; i++) {
        X -= A.at(i);
        if (X < 0) {
            cout << numA * N + i + 1 << endl;
            return 0;
        }
    }
}
