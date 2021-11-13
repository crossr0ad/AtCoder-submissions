#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

bool feasible(int s) {
    for (int a = 1; a < s; a++) {
        for (int b = 1; b < s; b++) {
            if (4 * a * b + 3 * a + 3 * b == s) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> S(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    cout << count_if(S.begin(), S.end(), [=](auto s) { return !feasible(s); })
         << endl;
}
