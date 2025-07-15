#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}
int countSpecialSequences(vector<int>& A, int X) {
    int N = A.size();
    vector<long long> dp(N, 0);
    long long total = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            if (A[j] < A[i]) {
                long long LCM = lcm(A[j], A[i]);
                if (LCM % X != 0) {
                    dp[i] = (dp[i] + dp[j] + 1) % MOD;
                }
            }
        }
        total = (total + dp[i]) % MOD;
    }
    return total;
}

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    cout << countSpecialSequences(A, X) << endl;
    return 0;
}
