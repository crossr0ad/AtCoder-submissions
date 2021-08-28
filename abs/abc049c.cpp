#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    while (S.size() > 5)
    {
        string last3 = S.substr(S.size() - 3);

        // dreamer
        if (last3 == "mer")
        {
            if (S.substr(S.size() - 7) != "dreamer")
            {
                cout << "NO" << endl;
                return 0;
            }
            // erase suffix "dreamer"
            S.erase(S.end() - 7, S.end());
            continue;
        }
        // eraser
        if (last3 == "ser")
        {
            if (S.substr(S.size() - 6) != "eraser")
            {
                cout << "NO" << endl;
                return 0;
            }
            // erase suffix "eraser"
            S.erase(S.end() - 6, S.end());
            continue;
        }
        // dream
        if (last3 == "eam")
        {
            if (S.substr(S.size() - 5) != "dream")
            {
                cout << "NO" << endl;
                return 0;
            }
            // erase suffix "dream"
            S.erase(S.end() - 5, S.end());
            continue;
        }
        // erase
        if (last3 == "ase")
        {
            if (S.substr(S.size() - 5) != "erase")
            {
                cout << "NO" << endl;
                return 0;
            }
            // erase suffix "erase"
            S.erase(S.end() - 5, S.end());
            continue;
        }
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
}
