#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<pair<double, double>> AB(N);
    vector<double> times(N);

    for (int i = 0; i < N; i++) {
        cin >> AB[i].first >> AB[i].second;
        times[i] = AB[i].first / AB[i].second;
    }

    auto eta = accumulate(times.begin(), times.end(), 0.0) / 2;

    auto d = 0.0;
    for (int i = 0; i < N; i++) {
        eta -= times[i];
        if (eta <= 0) {
            // time out
            d += AB[i].first * (1 - abs(eta) / times[i]);
            break;
        }
        d += AB[i].first;
    }
    cout << fixed << setprecision(15) << d << endl;
    return 0;
}
