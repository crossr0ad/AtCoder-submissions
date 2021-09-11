#include <bits/stdc++.h>
using namespace std;

int main() {
    string tmp, X;
    int Y;

    cin >> tmp;
    int pos = tmp.find(".");

    X = tmp.substr(0, pos);
    Y = stoi(tmp.substr(pos + 1));

    cout << X;

    if (Y <= 2)
        cout << "-";
    else if (Y >= 7)
        cout << "+";

    cout << endl;
}
