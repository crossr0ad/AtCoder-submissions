#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string s1, s2;
    cin >> s1 >> s2;

    if ((s1 == "#." && s2 == ".#") || (s1 == ".#" && s2 == "#.")) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}
