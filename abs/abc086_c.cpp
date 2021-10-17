#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    vector<long long> T(N), X(N), Y(N);

    for (size_t i = 0; i < N; i++)
    {
        cin >> T[i] >> X[i] >> Y[i];
    }

    long long x = 0, y = 0, t = 0;
    for (size_t i = 0; i < N; i++)
    {
        long long d = abs(X[i] - x) + abs(Y[i] - y);
        long long td = T[i] - t;

        if (d > td || (X[i] + Y[i]) % 2 != T[i] % 2)
        {
            cout << "No" << endl;
            return 0;
        }

        x = X[i];
        y = Y[i];
        t = T[i];
    }
    cout << "Yes" << endl;
}
