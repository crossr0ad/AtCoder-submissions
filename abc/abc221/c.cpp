#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string N;
    cin >> N;

    ll ans = 0;
    for (size_t i = 0; i < (1LU << N.size()); i++) {
        bitset<10> bs(i);

        vector<int> former, latter;
        for (size_t j = 0; j < N.size(); j++) {
            if (bs.test(j)) {
                former.push_back(N.at(j) - '0');
            } else {
                latter.push_back(N.at(j) - '0');
            }
        }

        if (former.size() == 0 || latter.size() == 0) {
            continue;
        }

        sort(former.begin(), former.end(), greater());
        sort(latter.begin(), latter.end(), greater());

        auto cumAdd = [](ll x, ll y) { return x * 10 + y; };
        auto sumF = accumulate(former.begin(), former.end(), 0LL, cumAdd);
        auto sumL = accumulate(latter.begin(), latter.end(), 0LL, cumAdd);

        ans = max(sumF * sumL, ans);
    }

    cout << ans << endl;
}
