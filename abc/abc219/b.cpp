#include <bits/stdc++.h>
using namespace std;

int main() {
    string S1, S2, S3, T;
    cin >> S1 >> S2 >> S3 >> T;

    for (auto &&t : T) {
        switch (t) {
            case '1':
                cout << S1;
                break;
            case '2':
                cout << S2;
                break;
            case '3':
                cout << S3;
                break;
            default:
                break;
        }
    }
    cout << endl;
}
