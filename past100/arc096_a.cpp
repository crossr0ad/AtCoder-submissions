#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    auto x = X, y = Y, c = 0;
    auto minPrice = A * X + B * Y;
    while (true) {
        x--;
        y--;
        if (x < 0 && y < 0) {
            break;
        }
        c += 2;
        minPrice = min(A * max(x, 0) + B * max(y, 0) + C * c, minPrice);
    }
    cout << minPrice << endl;
}
