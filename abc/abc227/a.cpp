#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, K, A;
    cin >> N >> K >> A;

    int ans = A + K - 1;
    cout << (ans % N != 0 ? ans % N : N) << endl;
}
