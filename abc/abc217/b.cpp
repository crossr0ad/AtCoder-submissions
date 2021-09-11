#include <bits/stdc++.h>
using namespace std;

int main() {
    string S1, S2, S3;
    cin >> S1 >> S2 >> S3;

    set<string> contests{"ABC", "ARC", "AGC", "AHC"};
    contests.erase(S1);
    contests.erase(S2);
    contests.erase(S3);
    cout << *contests.begin() << endl;
}
