#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    long long count = 0;
    for (auto &&s : S)
    {
        if (s == '1')
        {
            count++;
        }
    }
    cout << count << endl;
}
