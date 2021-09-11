#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    string ans;
    ans.reserve(120);

    while (N != 0) {
        while (N % 2 == 0) {
            N /= 2;
            ans += "B";
        }
        N -= 1;
        ans += "A";
    }
    reverse(ans.begin(), ans.end());

    cout << ans << endl;
}
