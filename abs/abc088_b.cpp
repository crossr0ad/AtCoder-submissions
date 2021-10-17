#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    vector<long long> A(N);
    for (auto &&a : A)
    {
        cin >> a;
    }

    long long alice = 0;
    long long bob = 0;
    bool isAlice = true;

    sort(A.begin(), A.end());
    while (!A.empty())
    {
        isAlice ? alice += A[A.size() - 1] : bob += A[A.size() - 1];
        A.pop_back();
        isAlice = !isAlice;
    }
    cout << alice - bob << endl;
}
