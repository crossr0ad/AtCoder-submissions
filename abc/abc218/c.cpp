#include <bits/stdc++.h>
using namespace std;

int N;

pair<int, int> beginPosition(vector<vector<bool>> &matrix) {
    pair<int, int> pos(-1, -1);
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            if (pos.first == -1 && matrix[i][j]) {
                pos.first = i;
            }
            if (pos.second == -1 && matrix[j][i]) {
                pos.second = i;
            }
            if (pos.first != -1 && pos.second != -1) {
                return pos;
            }
        }
    }
    return pos;
}

// 時計回りに90度回転
void rotate(vector<vector<bool>> &matrix) {
    vector<vector<bool>> origin(N, vector<bool>(N));
    origin.assign(matrix.begin(), matrix.end());

    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            matrix[i][j] = origin[j][N - i - 1];
        }
    }
}

bool isMatch(vector<vector<bool>> &S, vector<vector<bool>> &T) {
    pair<int, int> sBegin = beginPosition(S);
    pair<int, int> tBegin = beginPosition(T);

    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            bool sOut = sBegin.first + i >= N || sBegin.second + j >= N;
            bool tOut = tBegin.first + i >= N || tBegin.second + j >= N;

            if (sOut && tOut) {
                continue;
            }
            if (sOut) {
                if (T.at(tBegin.first + i).at(tBegin.second + j)) return false;
                continue;
            }
            if (tOut) {
                if (S.at(sBegin.first + i).at(sBegin.second + j)) return false;
                continue;
            }
            if (S.at(sBegin.first + i).at(sBegin.second + j) !=
                T.at(tBegin.first + i).at(tBegin.second + j)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    cin >> N;
    vector<vector<bool>> S(N, vector<bool>(N)), T(N, vector<bool>(N));

    int count = 0;

    // init S
    for (auto &&line : S) {
        string s;
        cin >> s;
        for (size_t i = 0; i < N; i++) {
            line[i] = (s[i] == '#');
            if (s[i] == '#') {
                count++;
            }
        }
    }

    // init T
    for (auto &&line : T) {
        string s;
        cin >> s;
        for (size_t i = 0; i < N; i++) {
            line[i] = (s[i] == '#');
            if (s[i] == '#') {
                count--;
            }
        }
    }

    if (count != 0) {
        cout << "No" << endl;
        return 0;
    }

    for (size_t i = 0; i < 4; i++) {
        if (isMatch(S, T)) {
            cout << "Yes" << endl;
            return 0;
        }
        rotate(S);
    }
    cout << "No" << endl;
}
