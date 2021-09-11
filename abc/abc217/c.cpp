#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N);
    map<int, int> Q;

    for (size_t i = 1; i <= N; i++) {
        int key;
        cin >> key;
        Q[key] = i;
    }
    for (size_t i = 1; i <= N; i++) {
        cout << Q.at(i);
        if (i != N) cout << " ";
    }
    cout << endl;
}
