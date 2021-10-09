#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

enum hand { Gu, Choki, Pa };

int judge(hand f, hand l) {
    if (f == l) {
        return 0;  // draw
    }
    if ((f == Gu && l == Choki) || (f == Choki && l == Pa) ||
        (f == Pa && l == Gu)) {
        return 1;  // win
    }
    return -1;  // lose
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    vector<vector<hand>> hands(2 * N, vector<hand>(M));

    for (int i = 0; i < 2 * N; i++) {
        string inputline;
        cin >> inputline;
        for (int j = 0; j < M; j++) {
            switch (inputline[j]) {
                case 'G':
                    hands[i][j] = Gu;
                    break;
                case 'C':
                    hands[i][j] = Choki;
                    break;
                case 'P':
                    hands[i][j] = Pa;
                    break;
                default:
                    break;
            }
        }
    }

    // index, num_win
    vector<pair<int, int>> perfs(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        perfs[i].first = i;
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            auto &f = perfs[2 * j];
            auto &l = perfs[2 * j + 1];
            auto fHand = hands[f.first][i];
            auto lHand = hands[l.first][i];
            auto win = judge(fHand, lHand);
            if (win == 1) {
                f.second++;
            } else if (win == -1) {
                l.second++;
            }
        }
        // sort by perf descending
        sort(perfs.begin(), perfs.end(), [](auto x, auto y) {
            if (x.second == y.second) {
                return x.first < y.first;
            }
            return x.second > y.second;
        });
    }

    for (int i = 0; i < 2 * N; i++) {
        cout << perfs[i].first + 1 << endl;
    }
}
