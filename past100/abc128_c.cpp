#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> S(M);

    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;

        vector<int> s(k);
        for (int i = 0; i < k; i++) {
            cin >> s[i];
            s[i] -= 1;
        }
        S.at(i) = s;
    }

    vector<int> p(M);
    for (int i = 0; i < M; i++) {
        cin >> p[i];
    }

    auto ans = 0;
    for (int i = 0; i < (1 << N); i++) {
        bitset<10> bs(i);

        // determine if all bulbs are lit
        auto all_lit = true;
        for (int j = 0; j < M; j++) {
            auto switches = S.at(j);

            auto num_on = count_if(switches.begin(), switches.end(),
                                   [=](auto x) { return bs.test(x); });
            if (num_on % 2 != p.at(j)) {
                all_lit = false;
                break;
            }
        }
        if (all_lit) {
            ans++;
        }
    }
    cout << ans << endl;
}
