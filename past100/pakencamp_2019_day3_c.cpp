#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int N, M;
    cin >> N >> M;

    vector<vector<ll>> A(N, vector<ll>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A.at(i).at(j);
        }
    }

    ll maxSum = 0;
    for (int i = 0; i < M; i++) {
        for (int j = i + 1; j < M; j++) {
            ll sum =
                accumulate(A.begin(), A.end(), 0LL, [i, j](ll acc, auto a) {
                    return acc += max(a.at(i), a.at(j));
                });
            maxSum = max(sum, maxSum);
        }
    }
    cout << maxSum << endl;
}
