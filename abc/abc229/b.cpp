#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    ll A, B;
    cin >> A >> B;
    while (A != 0 && B != 0) {
        if (A % 10 + B % 10 >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
        A /= 10;
        B /= 10;
    }
    cout << "Easy" << endl;
}
