#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int numComp(int n) {
    int cnt = 0;
    for (int i = 1; i * i < n; i++) {
        if (n % i == 0) {
            cnt += 2;
        }
    }
    return cnt;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    int cnt = 0;
    for (int i = 1; i <= N; i += 2) {
        if (numComp(i) == 8) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
