#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    string S;
    cin >> N >> S;

    vector<vector<int>> vec(10, vector<int>());

    for (int i = 0; i < 10; i++) {
        int index = -1;
        while (true) {
            index = S.find(to_string(i).front(), index + 1);
            if (index == -1) {
                break;
            }
            vec.at(i).push_back(index);
        };
    }

    int ans = 0;
    for (int i = 0; i < 1000; i++) {
        vector<int> d{i / 100, (i / 10) % 10, i % 10};

        if (vec.at(d.at(0)).size() == 0) {
            continue;
        }
        auto index = vec.at(d.at(0)).front();
        auto result = find_if(vec.at(d.at(1)).begin(), vec.at(d.at(1)).end(),
                              [index](auto x) { return x > index; });
        if (result == vec.at(d.at(1)).end()) {
            continue;
        }
        index = *result;
        result = find_if(vec.at(d.at(2)).begin(), vec.at(d.at(2)).end(),
                         [index](auto x) { return x > index; });
        if (result == vec.at(d.at(2)).end()) {
            continue;
        }
        ans++;
    }
    cout << ans << endl;
}
