#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
const long long INF = 1LL << 60;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<ll> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    ll minSum = INF;
    for (int i = 0; i < N; i++) {
        auto in = A[i];
        for (int j = 0; j < N; j++) {
            auto out = B[j];

            ll sum = 0;
            for (int k = 0; k < N; k++) {
                auto a = A.at(k), b = B.at(k);
                sum += abs(in - out) + 2 * max(in - a, 0LL) +
                       2 * max(b - out, 0LL);
            }

            minSum = min(sum, minSum);
        }
    }
    cout << minSum << endl;
}
