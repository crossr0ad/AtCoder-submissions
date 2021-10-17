#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    set<long long> D;
    for (size_t i = 0; i < N; i++)
    {
        long long d;
        cin >> d;
        D.insert(d);
    }

    cout << D.size() << endl;
}
