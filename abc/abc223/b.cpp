#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

string leftshift(string &S) {
    auto c = S[0];
    S.erase(S.begin());
    S.push_back(c);
    return S;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    vector<string> SS;
    for (size_t i = 0; i < S.size(); i++) {
        SS.push_back(S);
        leftshift(S);
    }
    sort(SS.begin(), SS.end());
    cout << SS[0] << endl << SS[SS.size() - 1] << endl;
}
