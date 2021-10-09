#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    
    int N, P;
    cin >> N >> P;

    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
        
    }
    cout << count_if(A.begin(), A.end(), [=](auto x){return x < P;}) << endl;
}
