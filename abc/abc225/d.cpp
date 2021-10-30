#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;
template <typename T>

void printVec(const T &vec) {
    cout << vec.size() << ' ';
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec.at(i) + 1;
        if (i < vec.size() - 1) {
            cout << ' ';
        }
    }
    cout << endl;
}
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, Q;
    cin >> N >> Q;

    vector<int> trains(N, -1);
    vector<int> trains_back(N, -1);

    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;
        int x, y;
        vector<int> ans;
        switch (q) {
            case 1:
                cin >> x >> y;
                x--;
                y--;
                trains[x] = y;
                trains_back[y] = x;
                break;
            case 2:
                cin >> x >> y;
                x--;
                y--;
                trains_back[trains[x]] = -1;
                trains[x] = -1;
                break;
            case 3:
                cin >> x;
                x--;
                while (trains_back[x] != -1) {
                    x = trains_back[x];
                }
                ans.push_back(x);
                while (trains[x] != -1) {
                    x = trains[x];
                    ans.push_back(x);
                }
                printVec(ans);
                break;
            default:
                break;
        }
    }
}
