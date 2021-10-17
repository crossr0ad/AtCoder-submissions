#include <bits/stdc++.h>
using namespace std;

long long A, B, C, X;

int main()
{
    cin >> A >> B >> C >> X;
    long long count = 0;

    for (size_t i = 0; i <= A; i++)
    {
        for (size_t j = 0; j <= B; j++)
        {
            for (size_t k = 0; k <= C; k++)
            {
                if (i * 500 + j * 100 + k * 50 == X)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}
