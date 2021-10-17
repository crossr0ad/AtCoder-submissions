#include <bits/stdc++.h>
using namespace std;

long long N, A, B;

long long sumDigit(long long n)
{
    long long sum = 0;
    for (long long i = log10(n); i >= 0; i--)
    {
        long long digit = pow(10, i);
        sum += n / digit;
        n -= n / digit * digit;
    }
    return sum;
}

int main()
{
    cin >> N >> A >> B;

    long long sum = 0;

    for (size_t i = 1; i <= N; i++)
    {
        long long sd = sumDigit(i);
        if (A <= sd && sd <= B)
        {
            sum += i;
        }
    }

    cout << sum << endl;
}
