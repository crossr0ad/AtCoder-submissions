#include <bits/stdc++.h>
using namespace std;

long long log2(long long x)
{
    long long count = 0;
    while (x % 2 == 0)
    {
        x /= 2;
        count++;
    }
    return count;
}

int main()
{
    long long N;
    cin >> N;

    vector<long long> A(N);

    for (auto &&a : A)
    {
        cin >> a;
    }

    long long count = pow(10, 9);

    for (auto &&a : A)
    {
        count = min(count, log2(a));
    }

    cout << count << endl;
}
