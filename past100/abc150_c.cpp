#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    // vector<int> P(N), Q(N), A(N);
    string P, Q, R;

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        P += s;
    }
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        Q += s;
    }

    for (int i = 0; i < N; i++) {
        R.push_back('1' + i);
    }

    vector<string> vec;
    do {
        vec.push_back(R);
    } while (next_permutation(R.begin(), R.end()));

    cout << abs(distance(find(vec.begin(), vec.end(), P),
                     find(vec.begin(), vec.end(), Q)))
         << endl;
}
