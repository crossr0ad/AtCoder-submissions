#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, Y;
    cin >> N >> Y;

    Y /= 1000;

    for (size_t i = 0; i <= N && i * 10 <= Y; i++)
    {
        for (size_t j = 0; j <= N - i && i * 10 + j * 5 <= Y; j++)
        {
            long long k = N - i - j;
            if (i * 10 + j * 5 + k == Y)
            {
                cout << i << " " << j << " " << k << endl;
                exit(0);
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}
