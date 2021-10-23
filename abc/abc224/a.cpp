#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    cout << (S.substr(S.size() - 2) == "er" ? "er" : "ist") << endl;
}
