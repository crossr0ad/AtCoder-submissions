#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int A, B, C;
    cin >> A >> B >> C;

    for (int i = A; i <= B; i++) {
        if (i % C == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
