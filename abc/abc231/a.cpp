#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

#define P_LINE(x) cout << (x) << "\n"
#define P_SPACE(x) cout << (x) << " "
#define P_YES(x) cout << ((x) ? "Yes" : "No") << "\n"
#define P_DOUBLE(x) cout << fixed << setprecision(16) << (x) << "\n"
template <typename T>
inline void P_ZPAD(const T& value, const int width) {
    cout << setw(width) << setfill('0') << value << "\n";
}
template <typename T>
inline void P_VEC(const T& vec, const string sep = " ", const string end = "\n",
                  const bool reversed = false) {
    for (size_t i = 0; i < vec.size(); i++) {
        auto idx = reversed ? vec.size() - i - 1 : i;
        cout << vec.at(idx);
        cout << ((i != vec.size() - 1) ? sep : end);
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int D;
    cin >> D;
    P_DOUBLE((double)D / 100);
}
