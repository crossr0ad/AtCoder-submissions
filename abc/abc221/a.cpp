#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int A, B;
    cin >> A >> B;
    cout << (int)pow(32, A - B) << endl;
}
