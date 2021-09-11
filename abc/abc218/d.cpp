#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> pos(N);
    for (size_t i = 0; i < N; i++) {
        cin >> pos.at(i).first >> pos.at(i).second;
    }

    // posをx座標で昇順ソート
    sort(pos.begin(), pos.end());

    int count = 0;

    for (size_t i = 0; i < N; i++) {
        auto p1 = pos.at(i);
        for (size_t j = i; j < N; j++) {
            auto p2 = pos.at(j);
            if (p1.first == p2.first || p1.second == p2.second) {
                continue;
            }

            pair<int, int> t1(p1.first, p2.second), t2(p2.first, p1.second);

            // posの中にt1、t2と同一のものがあるか探索
            if (binary_search(pos.begin() + i, pos.end(), t1) &&
                binary_search(pos.begin() + i, pos.end(), t2)) {
                count++;
            }
        }
    }
    cout << count << endl;
}
