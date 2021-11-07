#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

// vector<bool> aquires;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<ll> T(N);
    vector<int> K(N);
    vector<vector<int>> A(N);

    for (int i = 0; i < N; i++) {
        int t;
        ll k;
        cin >> t >> k;
        T[i] = t;
        K[i] = k;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            A[i].push_back(a - 1);
        }
    }

    stack<int> taskList;

    // aquire last task
    ll ans = T.back();
    for (int i = 0; i < K.back(); i++) {
        taskList.push(A.at(N - 1).at(i));
    }

    vector<bool> aquires(N);
    while (!taskList.empty()) {
        auto task = taskList.top();
        taskList.pop();

        if (aquires[task]) {
            continue;
        }

        for (size_t i = 0; i < A.at(task).size(); i++) {
            auto newTask = A.at(task).at(i);
            if (aquires[newTask]) {
                continue;
            }
            taskList.push(newTask);
        }
        // aquire `task'
        ans += T[task];
        aquires[task] = true;
    }

    cout << ans << endl;
}
